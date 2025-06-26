# Materi
Kembali lagi kita ke struktur perulangan! Kali ini, kita akan belajar struktur perulangan for.

Sebelumnya, kita telah belajar beberapa pola perulangan while. Pola perulangan while yang menggunakan variabel counter seperti pada kolom kiri pada tabel di bawah ini, bisa dipersingkat dengan perulangan for seperti pada kolom kanan:

```
while: 	                
<inisialisasi awal>;
while (<kondisi>) {
    ...
    <operasi akhir>;
}

for:
for (<inisialisasi awal>; <kondisi>; <operasi akhir>) {
    ...
}
```
Sebagai contoh:

while
```
int counter = 0;
while (counter < 3) {
    ...
    counter += 1;
}
```

for
```
for (int counter = 0; counter < 3; counter += 1) {
    ...
}
```

Sekarang, mari kita berlatih.

# Soal
Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). Ia ingin mengetahui luas setiap kandangnya. Dengan perulangan while, kodenya adalah:

```
int sisi = 121;
while (sisi <= 125) {
    cout << sisi * sisi << endl;
    sisi += 1;
}
```

Untuk pembelajaran kita, coba ubahlah perulangan di atas menjadi perulangan for!