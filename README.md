# Praktikum 4: Pengurutan dan Pencarian

Program C++ sederhana ini menunjukkan cara mengurutkan vektor bilangan bulat dalam urutan menaik (ascending) dan menurun (descending).

## Deskripsi

Kode ini melakukan hal berikut:
1. Menginisialisasi sebuah array bilangan bulat.
2. Mengonversi array tersebut menjadi `std::vector`.
3. Mencetak isi vektor awal.
4. Mengurutkan vektor dalam urutan menaik (ascending) dan mencetaknya.
5. Mengurutkan vektor dalam urutan menurun (descending) dan mencetaknya.

## Fitur

- Mengurutkan vektor bilangan bulat dalam urutan menaik.
- Mengurutkan vektor bilangan bulat dalam urutan menurun.

## Ketergantungan

- Kompiler C++ yang mendukung C++11 atau lebih baru (misalnya, g++).
- Pustaka Standar C++ (STL).

## Cara Mengompilasi dan Menjalankan

1.  **Kompilasi kode:**
    Buka terminal atau command prompt Anda dan jalankan perintah berikut:
    ```sh
    g++ Praktikum4.cpp -o Praktikum4
    ```

2.  **Jalankan program:**
    Setelah kompilasi berhasil, jalankan program yang dapat dieksekusi:
    ```sh
    ./Praktikum4
    ```

### Contoh Keluaran

```
Isi vector awal:
12 | 17 | 10 | 5 | 15 | 25 | 11 | 7 | 25 | 16 | 19
===============================================
Isi vector setelah di sorting:
5 | 7 | 10 | 11 | 12 | 15 | 16 | 17 | 19 | 25 | 25
===============================================
Isi vector setelah di di DESC Order:
25 | 25 | 19 | 17 | 16 | 15 | 12 | 11 | 10 | 7 | 5
===============================================
```
