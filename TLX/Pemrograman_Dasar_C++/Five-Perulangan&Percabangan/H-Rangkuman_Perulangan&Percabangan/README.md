# Rangkuman
Struktur perulangan for memiliki sintaks berikut:

```
for (<inisialisasi awal>; <kondisi>; <operasi akhir>) {
    ...
}
```

Sebagai contoh:

```
for (int i = 0; i < 10; i++) {
    ...
}
```

(Perulangan tersebut akan berjalan 10 iterasi.)

Perintah continue akan menghentikan / melewati iterasi sekarang.

Pada perulangan for, operasi akhir seperti i++ akan tetap dijalankan.

Perintah break akan menghentikan perulangan.

# Kuis Penutup
1. Apakah kedua kode berikut ekuivalen?

```
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    cout << "*";
}
```
```
int i = 0;
while (i < 10) {
    if (i % 2 == 0) {
        continue;
    }
    cout << "*";
    i++;
}
```

a. ya

b. tidak