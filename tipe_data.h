#ifndef TIPE_DATA_H
#define TIPE_DATA_H

#include <stdio.h> // Diperlukan untuk FILE *
#include <stdlib.h> // Diperlukan untuk tipe standar

// Mendeklarasikan custom tipe variabel
typedef int matrix;
typedef int nilai_awal;

// Membuat fungsi OOP versi C dengan struct
typedef struct{
    int *arrayP;
} Dynamic_array;

typedef struct{
    int **matrixP;
    int **matrixP2;
} Dynamic_matrix;

// Prototipe fungsi juga harus ada di file header jika ingin digunakan di file lain.
void printArray(Dynamic_array arrayprint, int size);
int printMatrix(Dynamic_matrix matrixprint, int row, int column);

#endif // TIPE_DATA_H