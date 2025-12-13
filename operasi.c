// operasi.c

#include "tipe_data.h" // Mengimpor semua typedef dan prototipe
// Catatan: Anda tidak perlu mengimpor <stdio.h> atau <stdlib.h> lagi jika sudah di tipe_data.h

// --- Implementasi printArray ---
void printArray(Dynamic_array arrayprint, int size){
    
    printf("\n");
    for ( int i = 0; i < size;i++){
        printf("Elemen ke-%d : ", i + 1);
        scanf("%d",&arrayprint.arrayP[i]);
    }

    printf("Array : [ ");
    for(int i = 0;i < size;i++){   
        printf("%d", arrayprint.arrayP[i]);
        if ( i < size - 1 ) printf (", "); // if single statement
    }
    printf(" ]\n");
}


// --- Implementasi printMatrix ---
int printMatrix(Dynamic_matrix matrixprint, int row, int column){
    
    // Deklarasikan file write buat matriks A
    FILE *fileA = fopen("matriksA.txt","w");
    
    // Validasi itu bukan NULL, disini akan mengembalikan nilai 1 dan pesan error ststem
    if( fileA == NULL ){
        perror("Errror cuy, ga iso di buka\n");
        return 1;
    }
    
    // Ini adalah cara aku membuat matriks A dengan menggunakan nested loop.
    /*
    
    i akan selalu beriterasi hingga jumlah input baris, yakni ( 0,1,2 ) jika kita menginput '3'
                        |                                                                       */
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            matrixprint.matrixP[i][j] = i * column + (j+1);  // inner loop itu j = 0 * 4 + (0+1) = 1 
            // mencetak file output                           //               j = 0 * 4 + (1+1) = 2 
            fprintf(fileA,"%3d ", matrixprint.matrixP[i][j]); //               j = 0 * 4 + (2+1) = 3     
        }
        // mencetak spasi
        fprintf(fileA,"\n"); 
    }
    
    // Jangan lupa untuk menutup pFile jika tidak digunakan lagi untuk mencegah error.
    fclose(fileA);


    // pesan bahwasanya Matriks A berhasil dibuat.
    printf("Berhasil dibuat matriks A\n");
    
    
    // Kita tidak perlu realloc arr, cukup buat matriks baru mat2 dengan ukuran kebalikan (column x row)
    // Alokasi matriks B dengan ukuran column baris dan row kolom (transpose dari A)
    matrixprint.matrixP2 = (int**)malloc(column * sizeof(int*));
    
    // Cek apakah alokasi pointer table berhasil
    if(matrixprint.matrixP2 == NULL){
        printf("Gagal alokasi memori untuk mat2\n");
        return 1;
    }
    
    // Alokasi setiap baris dari matriks B
    for(int i = 0; i < column; i++){
        matrixprint.matrixP2[i] = (int*)malloc(row * sizeof(int));
        if(matrixprint.matrixP2[i] == NULL){
            printf("Gagal alokasi memori untuk baris matriks B\n");
        return 1;
    }
    }


    // Deklarasikan file write buat matriks A
    FILE *fileB = fopen("matriksB.txt","w");
    
    // Validasi itu bukan NULL, disini akan mengembalikan nilai 1 dan pesan error ststem
    if( fileB == NULL ){
        perror("Errror cuy, ga iso di buka\n");
        return 1;
    }
    

    // Isi matriks B dengan cara mengambil elemen dari matriks A secara terbalik
    // mat[baris][kolom] diubah menjadi mat2[kolom][baris]
    // Contoh: mat[0][1] menjadi mat2[1][0]
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++) {            
            matrixprint.matrixP2[i][j] = matrixprint.matrixP[j][i];  
            // Ngeprint file output                                         
            fprintf(fileB,"%3d ", matrixprint.matrixP2[i][j]);//                
        }
        // Ngeprint file output
        fprintf(fileB,"\n");
    }
    
    fclose(fileB);
    
    printf("Berhasil dibuat matriks B\n");
    
    return 0;
}