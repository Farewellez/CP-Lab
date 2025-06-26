# Materi
Kita telah belajar bahwa jalannya perulangan bergantung pada sebuah kondisi yang kita tentukan di awal. Kali ini, kita akan berkenalan dengan dua buah perintah yang dapat mempengaruhi jalannya perulangan, di luar kondisi yang telah ditentukan: continue dan break.

Dalam suatu perulangan, kita menjalankan kode di dalam struktur for atau while berkali-kali. Setiap kalinya disebut dengan iterasi.

Dengan perintah continue:

Iterasi saat ini dihentikan (dilewati).
(Tetapi, untuk perulangan for, operasi akhir seperti i++ akan tetap dijalankan.)
Kemudian, iterasi berikutnya (jika ada) akan dijalankan.
Dengan perintah break:

Keseluruhan perulangan akan dihentikan.

# Berikut adalah ilustrasinya:

Kode	

```
for (int i = 1; i <= 10; i++) {
    cout << "awal iterasi " << i << endl;

    // ilustrasi perintah continue
    if (i % 2 == 0) {
        cout << "    iterasi dihentikan!" << endl;
        continue;

        // sebelum iterasi dihentikan,
        // perintah i++ akan tetap dijalankan
    }

    cout << "    halo dunia" << endl;

    // ilustrasi perintah break
    if (i % 5 == 0) {
        cout << "    perulangan dihentikan!" << endl;
        break;
    }

    cout << "akhir iterasi" << endl;
}

cout << "akhir perulangan" << endl;
```

awal iterasi 1
    halo dunia
akhir iterasi
awal iterasi 2
    iterasi dihentikan!
awal iterasi 3
    halo dunia
akhir iterasi
awal iterasi 4
    iterasi dihentikan!
awal iterasi 5
    halo dunia
    perulangan dihentikan!
akhir perulangan

Sekarang, mari kita berlatih.

# Soal
Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya, dengan ketentuan berikut:

Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.

Luas kolam (dalam cm persegi) adalah bilangan genap.

Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.

Berapakah luas kolam terkecil yang memenuhi seluruh syarat tersebut? Lengkapilah program di sebelah kanan agar mengeluarkan luas yang diminta.