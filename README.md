

# 🚀 Panduan Proyek Matriks Transpose dengan Multi-File C

Proyek ini mendemonstrasikan manajemen memori dinamis di C untuk operasi array 1D dan matriks 2D (transpose) menggunakan kompilasi multi-file (`latihan.c` dan `operasi.c`) dengan `Makefile`.

## 📂 Struktur Repositori

```
/Tugas dan Latihan Alpro
├── latihan.c           # File utama (main function, alokasi memori Matriks A)
├── operasi.c           # Implementasi fungsi (printArray, printMatrix, alokasi Matriks B)
├── tipe_data.h         # Definisi struct (Dynamic_array, Dynamic_matrix) dan prototipe fungsi
├── makefile            # Script untuk kompilasi dan linking otomatis
└── README.md           # Dokumen panduan ini
```

-----

## 🛠️ Persyaratan Sistem

Untuk menjalankan proyek ini, Anda membutuhkan:

1.  **Compiler C:** GCC (GNU Compiler Collection).
2.  **Make Tool:** Untuk menjalankan `Makefile` (biasanya sudah termasuk dalam sistem Linux/Fedora).
3.  **(Opsional, Sangat Disarankan)** **Valgrind:** Alat untuk memeriksa kesalahan memori (*memory leak* dan *corruption*).

## 💻 Panduan Menjalankan Program (Untuk Pemula)

Ikuti langkah-langkah di bawah ini untuk mengkompilasi, menjalankan, dan membersihkan proyek Anda.

### Tahap 1: Kompilasi Proyek

Kita menggunakan `Makefile` untuk mengkompilasi file `latihan.c` dan `operasi.c` menjadi satu *executable* bernama `latihan_matriks`.

1.  **Buka Terminal** di direktori proyek (`Tugas dan Latihan Alpro`).
2.  **Jalankan `make`**:
    ```bash
    make
    ```
    *(Jika `make` gagal, pastikan Anda telah mengganti semua indentasi di `Makefile` dengan karakter **TAB**.)*

### Tahap 2: Menjalankan Program

Setelah kompilasi berhasil, file *executable* akan dibuat.

1.  **Jalankan *executable***:
    ```bash
    ./latihan_matriks
    ```
2.  **Ikuti Prompt Input**:
      * Program akan meminta jumlah baris/elemen (N).
      * Program akan meminta N elemen untuk diisi ke array 1D.
      * Program akan meminta jumlah kolom (M) untuk Matriks A.

### Tahap 3: Output dan Hasil

  * Program akan menampilkan konfirmasi `Berhasil dibuat matriks A` dan `Berhasil dibuat matriks B`.
  * Dua file teks akan dibuat di direktori proyek:
      * `matriksA.txt` (Berisi Matriks A, ukuran N x M).
      * `matriksB.txt` (Berisi Matriks B, yaitu transpose dari Matriks A, ukuran M x N).

### Tahap 4: Membersihkan Proyek (Clean-up)

Setelah selesai, Anda dapat menggunakan `make` untuk membersihkan semua file objek (`.o`) dan *executable* (`latihan_matriks`).

```bash
make clean
```

-----

## 🔬 Pemeriksaan Memori (Debugging Tingkat Lanjut)

Proyek ini telah diperiksa memori menggunakan Valgrind untuk menghindari *Double Free* dan *Memory Leak*.

Jika Anda ingin memeriksa program dari kesalahan memori, jalankan:

```bash
valgrind --leak-check=full ./latihan_matriks
```

*(Pastikan Anda telah mengkompilasi dengan `make` karena flag `-g` (debugging) sudah termasuk dalam `Makefile`).*

-----

## 🔗 Kontak

Jika ada pertanyaan atau saran, silakan buka *Issue* di repositori ini.

---

## 🎉 Penutup
![Yvette Strinova](https://media.tenor.com/B-hOUdGo4s4AAAAi/yvette-strinova.gif)
---

Enjoy for testing and experiment.
