# Materi
Pada soal sebelumnya (Memborong Bebek), kita menuliskan logika perhitungan biaya pembelian bebek dua kali, untuk masing-masing jenis kelamin (jantan dan betina). Padahal, sebetulnya logika tersebut sama persis! Hal ini memiliki beberapa kelemahan, seperti:

- Rawan kesalahan penulisan. Bisa saja kita tidak sengaja menuliskan logika yang sedikit berbeda untuk bebek jantan dan betina.
- Apabila rumus biaya berubah di kemudian hari, kita harus ingat untuk menggantinya di kedua tempat (jantan dan betina).

Untuk mengatasi hal ini, pada C++ kita dapat "membungkus" serangkaian kode yang berpotensi dijalankan berkali-kali, ke dalam sebuah fungsi. Sebuah fungsi, ketika dipanggil, dapat mengembalikan sebuah nilai yang merupakan hasil dari serangkaian kode yang dijalankan. Nilai kembalian fungsi dapat juga bergantung pada suatu nilai lain, yang disebut dengan parameter.

Secara umum, sebuah fungsi didefinisikan sebagai berikut:

```
<tipe data fungsi> <nama fungsi>(<tipe data parameter> <nama parameter>) {
    ...
    return ...; // nilai kembalian dari fungsi ini
}
```

Sebagai contoh, perhatikan fungsi berikut, yang menghitung biaya pembelian bebek. Biaya ini bergantung pada total bebek yang dibeli, yang kita jadikan sebagai parameter. Fungsi ini bernama biaya, yang mengembalikan nilai bertipe int. Fungsi ini menerima sebuah variabel parameter bernama total_bebek yang bertipe int.

```
int biaya(int total_bebek) {
    int harga_bebek;

    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return harga_bebek * total_bebek;
}
```

Fungsi ini dapat dipanggil dengan menuliskan ekspresi biaya(<argumen>). Argumen di antara tanda kurung akan disimpan ke parameter total_bebek di dalam fungsi tersebut. Nilai yang di-return akan dikembalikan sebagai nilai akhir dari pemanggilan fungsi.

Sebagai contoh, misalkan terdapat perintah berikut:

```
int hasil = biaya(10);
```

Yang terjadi adalah sebagai berikut:

-Ekspresi biaya(10) adalah sebuah pemanggilan fungsi biaya dengan argumen 10.
-Fungsi biaya akan dijalankan. Parameter total_bebek akan bernilai 10.
-Pada akhirnya, perintah return harga_bebek * total_bebek; akan dijalankan, yang ekuivalen dengan return 75000;.
-Pemanggilan biaya(10) mengembalikan nilai 750000.
-Ekspresi biaya(10) bernilai 750000, sehingga nilai variabel hasil menjadi 750000.
# Soal
Sekarang, coba kerjakan kembali soal sebelumnya namun dengan menggunakan bantuan fungsi biaya. Perhatikan bahwa dengan cara ini, logika perhitungan biaya pembelian bebek bisa dituliskan hanya sekali saja.