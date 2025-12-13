
# 🚀 Matrix Transpose: Project C Multi-File

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Build](https://img.shields.io/badge/Build-GNU%20Make-brightgreen?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner%20Friendly-success?style=for-the-badge)

> **Untuk Pemula:** Proyek ini adalah "Sihir Matematika" yang memutar posisi angka (baris menjadi kolom), ibarat mengubah posisi HP dari berdiri (portrait) menjadi tidur (landscape).
>
> **Untuk Profesional:** Implementasi *Low-Level* operasi matriks menggunakan `malloc/free` (Dynamic Memory), arsitektur modular, dan otomatisasi build via Makefile.

---

## 🧐 Apa yang Sebenarnya Terjadi? (Konsep Visual)

Bayangkan kamu punya **Rak Telur** atau tabel angka. Program ini mengubah **Posisi Tidur** menjadi **Posisi Berdiri**.

```text
    MATRIKS A (Input)          MATRIKS B (Output)
    -----------------          ------------------
    [ 1 ] [ 2 ] [ 3 ]    ➡️    [ 1 ] [ 4 ]
    [ 4 ] [ 5 ] [ 6 ]          [ 2 ] [ 5 ]
                               [ 3 ] [ 6 ]
```

---

## 📂 Struktur Repositori

File-file ini bekerja sama seperti sebuah tim:

```text
/Tugas dan Latihan Alpro
├── latihan.c           # 🧠 OTAK: File utama, mengatur alur & memori.
├── operasi.c           # 🛠️ TUKANG: Melakukan perhitungan & menulis file.
├── tipe_data.h         # 📖 KAMUS: Daftar istilah (struct) yang dipakai.
├── makefile            # 🤖 ROBOT: Skrip otomatis untuk menyatukan program.
└── README.md           # ℹ️ PANDUAN: Dokumen yang sedang kamu baca ini.
```

---

## 🛠️ Persiapan: Siapkan "Dapur" Anda

Sebelum memasak (coding), pastikan komputer memiliki alatnya (**Compiler GCC** & **Make**).
*Pilih panduan sesuai laptop kamu:*

<details>
<summary><b>🪟 Saya Pengguna Windows (Klik Disini)</b></summary>
<br>

Disarankan menggunakan **WSL** (Linux di dalam Windows) agar standar industri.

1.  Buka **PowerShell** sebagai Administrator.
2.  Ketik: `wsl --install` lalu Enter.
3.  Tunggu selesai, lalu **Restart Laptop**.
4.  Buka aplikasi **Ubuntu** dari menu Start, buat username.
5.  Ketik perintah ini:
    ```bash
    sudo apt update && sudo apt install build-essential valgrind
    ```
</details>

<details>
<summary><b>🍎 Saya Pengguna Mac (Klik Disini)</b></summary>
<br>

1.  Buka **Terminal** (Cmd + Spasi, ketik Terminal).
2.  Ketik perintah ini:
    ```bash
    xcode-select --install
    ```
3.  Klik **Install** pada pop-up yang muncul.
</details>

<details>
<summary><b>🐧 Saya Pengguna Linux (Klik Disini)</b></summary>
<br>

Jalankan perintah ini di terminal:
```bash
sudo apt update && sudo apt install build-essential make valgrind
```
</details>

> [!TIP]
> **Cara Cek Apakah Kamu Siap:**
> Ketik `gcc --version` dan `make --version` di terminal. Jika muncul angka versi, berarti aman!

---

## ⚡ Quick Start (Jalur Cepat untuk Pro)

Jika kamu sudah paham terminal, langsung saja:

1.  **Build:** `make`
2.  **Run:** `./latihan_matriks`
3.  **Clean:** `make clean`
4.  **Debug:** `valgrind --leak-check=full ./latihan_matriks`

---

## 💻 Panduan Lengkap (Jalur Pemandu untuk Pemula)

Ikuti langkah ini perlahan-lahan. Jangan takut salah.

### Tahap 1: Merakit Program
Kita tidak mengkompilasi manual. Kita panggil robot `make`.

1.  Buka Terminal di folder proyek.
2.  Ketik perintah:
    ```bash
    make
    ```
3.  Jika sukses, akan muncul file baru bernama `latihan_matriks`.

> [!WARNING]
> **Penting Soal Makefile:**
> Jika kamu mengedit file `makefile` dan muncul error `missing separator`, itu karena spasi. Pastikan indentasi menggunakan tombol **TAB**, bukan Spasi.

### Tahap 2: Menjalankan Program
Panggil program yang sudah jadi:
```bash
./latihan_matriks
```

### Tahap 3: Input Data (Ikuti Aturan Ini)
Program akan meminta angka. Ikuti contoh ini agar sukses:

1.  **Total Elemen (N):** Masukkan `6`.
2.  **Masukkan Elemen:** Masukkan angka `1` `2` `3` `4` `5` `6` (Tekan Enter tiap angka).
3.  **Jumlah Kolom (M):** Masukkan `3`.

> [!IMPORTANT]
> **Logika Matematika:**
> Pastikan **Total Elemen (N)** bisa dibagi habis oleh **Kolom (M)**.
> *   ✅ Benar: Elemen 6, Kolom 3 (Baris jadi 2).
> *   ❌ Salah: Elemen 5, Kolom 2 (Sisa 1, error logika).

> [!CAUTION]
> **Hati-hati:** Masukkan hanya **angka bulat**. Jangan huruf, nanti program bingung (*crash*).

### Tahap 4: Melihat Hasil
"Kok layarnya diam saja?"
Program ini menyimpan hasil ke dalam **File Teks** agar rapi. Cek folder kamu sekarang:

*   📄 **`matriksA.txt`** (Posisi Awal / Tidur).
*   📄 **`matriksB.txt`** (Hasil Putaran / Berdiri).

### Tahap 5: Bersih-bersih
Hapus file sampah sisa kompilasi dengan perintah:
```bash
make clean
```

---

## 🔬 Deep Dive: Manajemen Memori (Info Edukasi)

Bagian ini untuk kamu yang ingin tahu "Bagaimana komputer bekerja?".

Program ini menggunakan **Dynamic Memory Allocation (`malloc`)**.
*   **Analogi:** Bayangkan kamu makan di restoran. Kamu "meminjam" piring (Memori). Setelah selesai makan, kamu harus mengembalikan piringnya ke dapur (`free`).
*   **Memory Leak:** Jika kamu lupa mengembalikan piring, restoran akan kehabisan piring. Itu disebut *Memory Leak*.

Jika ingin mengecek apakah program ini mengembalikan piring dengan benar, gunakan alat bernama **Valgrind**:

```bash
valgrind --leak-check=full ./latihan_matriks
```

---

## 🔗 Kontak & Diskusi

Jika ada pertanyaan, error, atau saran:
1.  Buka tab **Issues** di repositori ini.
2.  Buat Issue baru dan jelaskan kendala kamu.

---

## 🎉 Penutup

Terima kasih sudah mencoba proyek ini! Jangan menyerah kalau ada error, coba lagi dan lagi.

<p align="center">
  <img src="https://media.tenor.com/B-hOUdGo4s4AAAAi/yvette-strinova.gif" alt="Semangat" width="600">
  <br>
  <b>Happy Coding & Keep Learning!</b>
</p>

---

*Enjoy for testing and experiment.*
```
