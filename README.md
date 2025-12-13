# 🚀 Panduan Proyek Matriks Transpose dengan Multi-File C

Proyek ini mendemonstrasikan manajemen memori dinamis di C untuk operasi array 1D dan matriks 2D (transpose) menggunakan kompilasi multi-file (`latihan.c` dan `operasi.c`) dengan `Makefile`.

> [!NOTE]
> Proyek ini dirancang untuk tujuan pembelajaran (edukasi), khususnya bagi yang ingin memahami bagaimana **alokasi memori** (`malloc`) bekerja dan cara membagi kode C menjadi beberapa file agar lebih rapi.

## 📂 Struktur Repositori

```text
/Tugas dan Latihan Alpro
├── latihan.c           # File utama (main function, alokasi memori Matriks A)
├── operasi.c           # Implementasi fungsi (printArray, printMatrix, alokasi Matriks B)
├── tipe_data.h         # Definisi struct (Dynamic_array, Dynamic_matrix) dan prototipe fungsi
├── makefile            # Script untuk kompilasi dan linking otomatis
└── README.md           # Dokumen panduan ini
```

-----

## 🛠️ Persyaratan Sistem (Apa yang harus disiapkan?)

Sebelum memulai, pastikan komputer kamu memiliki alat-alat berikut. Jika kamu menggunakan Linux (Ubuntu/Fedora) atau WSL (Windows Subsystem for Linux), biasanya ini sudah tersedia.

1.  **Compiler C:** GCC (GNU Compiler Collection).
2.  **Make Tool:** Untuk menjalankan perintah `make`.
3.  **Terminal:** Aplikasi Command Prompt atau Terminal di Linux/Mac.

> [!TIP]
> **Cara Cek Apakah Komputer Kamu Sudah Siap:**
> 1. Buka terminal.
> 2. Ketik `gcc --version` lalu Enter.
> 3. Ketik `make --version` lalu Enter.
>
> Jika muncul tulisan versi (misal `gcc (Ubuntu...) 9.4.0`), berarti kamu **aman**! Jika muncul "command not found", kamu perlu menginstalnya dulu.

-----

## 💻 Panduan Menjalankan Program (Untuk Pemula)

Ikuti langkah-langkah di bawah ini secara berurutan. Jangan khawatir, kita akan melakukannya perlahan.

### Tahap 1: Masuk ke Folder Proyek

Pastikan kamu sudah mendownload kode ini. Jika mendownload sebagai ZIP, ekstrak dulu. Lalu buka terminal di dalam folder tersebut.

### Tahap 2: Kompilasi Proyek (Membuat Program)

Kita tidak akan mengkompilasi file satu per satu secara manual. Kita akan menggunakan `Makefile` agar otomatis.

1.  Di dalam terminal, ketik perintah berikut lalu tekan **Enter**:
    ```bash
    make
    ```
2.  Jika berhasil, tidak akan ada pesan error, dan akan muncul file baru bernama `latihan_matriks`.

> [!WARNING]
> **Penting Soal `Makefile`**
> Jika kamu mencoba mengedit file `makefile` sendiri dan mendapat pesan error `missing separator`, itu biasanya karena masalah spasi.
> Pastikan baris perintah di dalam `makefile` (seperti di bawah `all:` atau `clean:`) menggunakan tombol **TAB**, bukan spasi biasa.

### Tahap 3: Menjalankan Program

Sekarang program sudah siap dijalankan.

1.  Ketik perintah ini di terminal:
    ```bash
    ./latihan_matriks
    ```
2.  Program akan berjalan dan meminta input dari kamu.

> [!CAUTION]
> **Hati-hati Saat Input Data**
> Masukkan hanya **angka bulat** (integer) saat program meminta input. Jangan memasukkan huruf atau simbol aneh, karena program bisa berhenti mendadak (*crash*).

**Alur Input Program:**
1.  **Masukkan N:** Jumlah total elemen (misal: `6`).
2.  **Masukkan Elemen:** Masukkan angka sebanyak N kali (misal: `10`, `20`, `30`, `40`, `50`, `60`).
3.  **Masukkan Kolom (M):** Tentukan berapa kolom untuk Matriks A.
    *   *Logika:* Jika N = 6, dan kamu input Kolom M = 3, maka otomatis Baris = 2 (karena 2 baris x 3 kolom = 6 elemen).

> [!IMPORTANT]
> **Aturan Matematika Matriks:**
> Pastikan angka **N** (total elemen) bisa dibagi habis oleh angka **M** (kolom) yang kamu masukkan.
> Contoh: Jika total elemen 5, jangan masukkan kolom 2 (karena 5 bagi 2 sisa 1). Matriks harus kotak sempurna.

### Tahap 4: Melihat Hasil (Output)

Setelah program selesai, layar akan menampilkan:
*   `Berhasil dibuat matriks A`
*   `Berhasil dibuat matriks B`

Ke mana perginya data matriks tersebut? Cek folder proyek kamu sekarang.

> [!NOTE]
> Program ini **tidak** menampilkan matriks di layar terminal hitam, melainkan menyimpannya ke dalam file teks agar lebih rapi.
> *   Buka file **`matriksA.txt`** untuk melihat matriks asli.
> *   Buka file **`matriksB.txt`** untuk melihat hasil transpose (baris jadi kolom).

### Tahap 5: Membersihkan Proyek (Clean-up)

Jika sudah selesai, kamu bisa menghapus file hasil kompilasi agar folder kembali bersih.

```bash
make clean
```

-----

## 🔬 Pemeriksaan Memori (Debugging Lanjutan)

Bagian ini opsional. Jika kamu ingin memastikan kode ini "sehat" dari kebocoran memori (*memory leak*), jalankan perintah ini (butuh install `valgrind` dulu):

```bash
valgrind --leak-check=full ./latihan_matriks
```

> [!TIP]
> **Apa itu Memory Leak?**
> Bayangkan kamu meminjam piring di restoran tapi lupa mengembalikannya ke dapur. Jika terus menerus, restoran kehabisan piring. `Valgrind` adalah alat untuk memastikan program kita "mengembalikan piring" (memori) setelah dipakai.

-----

## 🔗 Kontak & Kontribusi

Jika ada pertanyaan, error, atau saran, silakan:
1.  Buka tab **Issues** di repositori ini.
2.  Buat Issue baru dan jelaskan kendala kamu.

---

## 🎉 Penutup

Terima kasih sudah mencoba proyek ini! Selamat belajar.

![Yvette Strinova](https://media.tenor.com/B-hOUdGo4s4AAAAi/yvette-strinova.gif)

---

*Enjoy for testing and experiment.*
```
