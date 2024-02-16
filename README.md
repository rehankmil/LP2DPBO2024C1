# LP2DPBO2024C1
# Janji
Saya Mohammad Raihan Aulia Kamil (2205449) mengerjakan soal Latihan Praktikum 2 C1 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan. Aamiin.
# Desain Kelas
A. Class Product:
- Merupakan kelas dasar yang merepresentasikan produk umum dengan atribut sebagai berikut,
    - idProduct
    - name
    - brand
    - price.
- Konstruktor Product digunakan untuk menginisialisasi atribut-atribut produk.
- Menggunakan metode toTableRow() digunakan untuk mengembalikan representasi string dari objek Product sebagai baris tabel.

B. Class Clothing:
- Merupakan kelas anak atau kelas yang mewarisi sifat-sifat dari kelas Product dan menambahkan atribut-atribut sebagai berikut,
    - size
    - material
    - gender
- Konstruktor Clothing menerima argumen untuk menginisialisasi atribut-atribut produk serta atribut khusus pakaian.
- Menggunakan metode toTableRow() digunakan untuk mengembalikan representasi string dari objek Clothing sebagai baris tabel.
  
C. Class Shirt:
- Merupakan kelas cucu atau kelas turunan dari Clothing yang menambahkan atribut tambahan sebagai berikut,
    - color
    - sleeveType
- Konstruktor Shirt menerima argumen untuk menginisialisasi atribut-atribut produk, atribut khusus pakaian, dan atribut tambahan untuk baju.
- Menggunakan metode toTableRow() digunakan untuk mengembalikan representasi string dari objek Shirt sebagai baris tabel.
# Desain Program
Terdapat 4 kelas,
1. Class Product
2. Class Clothing
3. Class Shirt
4. Class Main

Penanganan Input dan Output:
  Saya menggunakan kelas Scanner untuk menerima masukan dari user melalui terminal. Setelah masukan diterima, objek Shirt akan dibuat sesuai dengan masukan user. Setelah itu, akan ditampilkan dalam format tabel untuk memudahkan pembacaan.
  
Struktur Data untuk Penyimpanan Objek:
Saya menggunakan List<Shirt> untuk menyimpan objek Shirt yang dibuat oleh user. Namun sebelumnya sudah dimasukan 3 objek data kedalam list ini secara hardcode.
# Alur Program
1. User langsung ditampilkan data kaosnya dalam bentuk tabel
2. User diberi pilihan menu untuk menambahkan data atau tidak dengan pilihan menu sebagai berikut,
   1. Iya
   2. Tidak 
3. Jika memilih 1 maka user akan mengisi masukan objek baru dengan atributnya dan jika memilih 2 maka ditampilkan "Terima Kasih!" program berhenti
# Dokumentasi
