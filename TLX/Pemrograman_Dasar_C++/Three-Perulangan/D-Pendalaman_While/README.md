# Materi
Secara garis besar, struktur perulangan while bekerja sebagai berikut:

1. Uji nilai pada kondisi.
Apabila bernilai benar:
- Jalankan kode di dalam struktur while tersebut.
- Kembali ke langkah 1.

Apabila bernilai salah:
- Perulangan while selesai.

Sebagai contoh, perhatikan kode kita sebelumnya:

```
int total_baris = 0;
while (total_baris < 3) {
    luas_kandang += 7;
    cout << luas_kandang << endl;
    total_baris += 1;
}
```

Berikut ini adalah ilustrasi dari perulangan yang akan dijalankan:

```
Nilai total_baris	Kondisi	    Nilai kondisi	Perintah yang dijalankan
0	                0 < 3          benar ✅	       luas_kandang += 7;
                                                    cout << luas_kandang << endl;
                                                    total_baris += 1;
1	                1 < 3          benar ✅	       luas_kandang += 7;
                                                    cout << luas_kandang << endl;
                                                    total_baris += 1;
2	                2 < 3          benar ✅	       luas_kandang += 7;
                                                    cout << luas_kandang << endl;
                                                    total_baris += 1;
3	                3 < 3          salah ❌	       (perulangan selesai)
```

Secara umum, jika kita ingin menjalankan sebuah potongan kode sebanyak N kali, kita bisa menggunakan "pola" berikut:

```
int counter = 0;
while (counter < N) {
    ...
    counter += 1;
}
```

Contoh di atas merupakah salah satu contoh penggunaan stuktur perulangan while yang paling sederhana.

# Kuis
1. Berapa kalikah C++ akan tercetak?

```
int counter = 0;
while (counter < 4) {
    cout << "C++" << endl;
    counter += 1;
}
```

a. 3

b. 4

c. 5

d. 6

2. Berapa kalikah C++ akan tercetak?

```
int counter = 1;
while (counter < 4) {
    cout << "C++" << endl;
    counter += 1;
}
```

a. 3

b. 4

c. 5

d. 6

3. Berapa kalikah C++ akan tercetak?

```
int counter = 1;
while (counter <= 4) {
    cout << "C++" << endl;
    counter += 1;
}
```
(Operator <= bermakna "kurang dari atau sama dengan".)

a. 3

b. 4

c. 5

d. 6

4. Berapa kalikah C++ akan tercetak?

```
int counter = 1;
while (counter <= 6) {
    cout << "C++" << endl;
    counter += 2;
}
```

a. 3

b. 4

c. 5

d. 6