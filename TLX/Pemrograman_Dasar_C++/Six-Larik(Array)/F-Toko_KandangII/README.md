# Soal
Pak Dengklek membuka 4 toko kandang bebek. Pada setiap tokonya, ia menjual 3 merek kandang, satu kandang untuk setiap mereknya, dengan ukuran-ukuran sebagai berikut (dalam cm persegi):

            Luas kandang merek 1	Luas kandang merek 2	Luas kandang merek3
Toko 1	    225×335	                299×278	                300×250

Toko 2	    215×394	                144×718	                300×290

Toko 3	    200×400	                240×333	                142×619

Toko 4	    314×298	                411×198	                333×222


Seorang pembeli ingin membeli kandang yang berukuran setidaknya 
80000 cm persegi. Di antara seluruh kandang dari seluruh toko, ada berapa kandang yang memenuhi? Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya kandang yang memenuhi.

# Materi
Sejauh ini, kita telah mempelajari larik yang memiliki satu dimensi, yakni yang memiliki elemen-elemen yang diakses dengan satu indeks. Dalam C++, larik dapat juga memiliki lebih dari satu dimensi, dengan cara menambahkan kurung siku berisi ukuran ([<ukuran larik>]) pada deklarasi variabelnya. Sebagai contoh, tabel di atas dapat dinyatakan dalam sebuah larik dua dimensi, sebagai berikut:

```
int luas[4][3];
```

Kode di atas membuat sebuah variabel luas berupa larik bilangan bulat dua dimensi, yang memiliki 4×3 elemen. Diperlukan dua indeks untuk mengakses setiap elemennya. Elemen-elemen larik tersebut adalah luas[0][0] sampai dengan luas[3][2]. Ingat bahwa penomoran indeks dimulai dari 0, yang berlaku untuk setiap dimensinya.

Kita bisa menggunakan larik tersebut untuk menyatakan data ukuran kandang dari seluruh toko Pak Dengklek. Yakni, luas[i][j] menyatakan luas kandang merek ke-j dari toko ke-i. (Untuk mempermudah, anggaplah penomoran toko dan merek kandang menjadi dimulai dari 0, sesuai dengan indeksnya.)

Untuk mengiterasi seluruh elemen larik, kita bisa menggunakan perulangan bersarang terhadap indeks dari kedua dimensi. Misalnya, gunakan perulangan for terhadap indeks dimensi pertama, lalu di dalamnya, gunakan perulangan for lainnya terhadap indeks dimensi kedua.