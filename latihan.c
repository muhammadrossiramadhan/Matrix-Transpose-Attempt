// Mencoba Teori dan Uji Pemahaman Bahasa C dari buku / catatan

#include "tipe_data.h" // Mengimpor semua definisi dan prototipe fungsi

// Gerbang Utama

int main(){

    // Deklarasi variabel integer n dengan default value adalah 0.

    // jumlah elemen atau baris yang nantinya akan ku gunakan sebagai matrix dua dimensi.
    nilai_awal elemen = 0;

    // mendeklarasikan stuct dengan nilai pointer untuk array dengan nama variabel adalah " array "
    Dynamic_array array = { .arrayP = NULL };

    /*  
                                Sekarang kita mencoba berexperiment 
                                terlebih dahulu dengan sebuah elemen 
    */

    // Output data input elemen/elemen.
    printf("Masukkan jumlah baris/elemen : "); 

    // Input data untuk sementara menjalankan sebuah elemen.
    scanf("%d",&elemen);

    // Menampilkan jumlah data elemen/baris input elemen.
    printf("\nJumlah baris yang di input : %d\n", elemen);

    // Mencoba membuat alokasi elemen dinamisnya dengan n sebagai elemen trigger.
    array.arrayP = (int*)malloc(elemen*sizeof(int)); // ( pointer to int )

    //Validasi kegagalan alokasi
    if(array.arrayP == NULL){
        /* 
        
        Jika arr itu berisi null maka dia akan mengembalikkan nilai 1  
        dengan dilengkapi pesan error system berisi "Alokasi memori gagal!\n".

        */ 
        perror("Alokasi memori gagal!\n");
        return 1;
    }

    // Tahap membuat sekaligus mencetak elemen dari nilai pointer arr yang telah di deklarasikan tersebut.

    printArray(array, elemen);
    
    /*                           Sekarang kita mencoba berexperiment 
                                lanjutan dengan membuat sebuah Matriks 
                                        atau Array Multidimensi 
    */

    // mendeklarasikan stuct dengan nilai pointer untuk matrix dengan nama variabel adalah " matrix " dan assignment NULL karena kita pakainya di int printmatrix
    Dynamic_matrix matrix2 = { .matrixP = NULL, 
                              .matrixP2 = NULL
                            };

    // mencetak matriks untuk mengetahui diterminal dan meminta user memberikan input sekian berapa
    printf("\nMatriks\n");
    printf("Jumlah baris yang telah di input sebelumnya sebagai elemen : %d ", elemen); 

    printf("\nMasukkan jumlah kolom untuK matriks A : ");

    // jumlah kolom yang mungkin akan aku gunakan sebagai matrix dua dimensi.
    matrix column = 0;
    
    // meminta input data.
    scanf("%d",&column);
    getchar();  // Clear newline from input buffer
    
    // mendeklarasikan sebuah integer row yang bervalue n.
    matrix row = elemen;
    
    // membuat alokasi memori untuk array multidimensi ( pointer to pointer to int ) terlebih dahulu.
    matrix2.matrixP = (int**)malloc(row*sizeof(int*));
    
    // mendeklarasikan sebuah alokasi memori untuk kolom yang berdasarkan sebuah baris.
    for(int i = 0; i < row; i++){
        matrix2.matrixP[i] = (int*)malloc(column * sizeof(int));
    }
    

    printMatrix(matrix2,row,column);
 
    
    // --- 1. Bebaskan Matriks A (matrix2.matrixP) ---
    // Cek dulu apakah pointer tabel dialokasikan
    if (matrix2.matrixP != NULL) { 
        for(int i = 0; i < row; i++) {
            // Cek setiap baris sebelum free
            if (matrix2.matrixP[i] != NULL){
                free(matrix2.matrixP[i]); 
            }
        }

        free(matrix2.matrixP); // Bebaskan pointer tabel
    }

    // --- 2. Bebaskan Matriks B (matrix2.matrixP2) ---
    // Cek dulu apakah pointer tabel dialokasikan
    if (matrix2.matrixP2 != NULL) { 
        // Baris B dialokasikan dengan jumlah kolom (`column`), bukan baris (`row`)
        for(int i = 0; i < column; i++) { 
            // Cek setiap baris sebelum free. Ini menangani kasus alokasi parsial.
            if (matrix2.matrixP2[i] != NULL){
                free(matrix2.matrixP2[i]); 
            }
        }

        free(matrix2.matrixP2); // Bebaskan pointer tabel
    }

    // --- 3. Bebaskan Array Awal ---
    if (array.arrayP != NULL) {
        free(array.arrayP);
    }
    
    printf("Program selesai - kedua file berhasil dibuat!\n");
    
    return 0;

}





