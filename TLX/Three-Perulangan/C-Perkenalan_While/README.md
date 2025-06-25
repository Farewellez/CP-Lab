Materi
Pada soal sebelumnya, kita ingin menjalankan potongan kode berikut sebanyak tiga kali:

```
luas_kandang += 7;
cout << luas_kandang << endl;
```

Kita telah melakukannya dengan cara copy-paste / menduplikasikan potongan kode di atas. Bayangkan apabila kita ingin menjalankannya berkali-kali lagi!

Pada bahasa C++, kita bisa menjalankan potongan kode berulang-ulang dengan struktur perulangan while, dengan sintaks:

```
while (<kondisi>) {

    // kode di dalam struktur "while" ini akan dijalankan berulang-ulang,
    // selama "kondisi" di atas bernilai benar

}
```

"Kondisi" yang dimaksud di sini adalah sebuah ekspresi boolean, yakni sebuah ekspresi yang menghasilkan nilai kebenaran. Kemungkinan nilainya hanya dua: benar atau salah. Ekspresi boolean biasanya mengandung operator perbandingan:

- <, > (kurang dari, lebih dari)
- <=, >= (kurang dari atau sama dengan, lebih dari atau sama dengan)
- == (sama dengan)
- != (tidak sama dengan)

Sebagai contoh:
- 1 + 1 == 2 (bernilai benar)
- 1 > 2 (bernilai salah)
- total < 3 (nilainya bergantung pada nilai variabel total)

Sekarang, mari kita bahas kembali soal kita. Untuk menerjemahkan "jalankanlah kode berikut sebanyak tiga kali" ke dalam bahasa C++, kita bisa menggunakan struktur while dengan bantuan variabel sebagai "counter" (penghitung). Untuk lebih jelasnya, perhatikan kode di bawah ini:

```
// variabel "counter", yang menyatakan sudah berapa baris ukuran kandang tercetak
int total_baris = 0;

// selama total baris yang tercetak belum mencapai 3,
// kode di dalam struktur while di bawah ini akan dijalankan berulang-ulang

while (total_baris < 3) {

    luas_kandang += 7;
    cout << luas_kandang << endl;

    // total baris yang tercetak bertambah 1
    total_baris += 1;
}

// perulangan while akan selesai ketika total baris yang tercetak sudah bernilai 3
```

# Soal
Lengkapilah program di sebelah kanan, agar potongan kode di dalam while dijalankan tiga kali, sesuai dengan materi yang telah kita pelajari.