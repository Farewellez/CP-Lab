Soal
Pak Dengklek memiliki 67 bebek jantan dan 98 bebek betina. Ia ingin memasukkan bebek-bebeknya ke dalam kandang-kandang, sedemikian sehingga setiap kandang terisi penuh dan berisi banyaknya bebek yang sama. Dengan kata lain, total banyaknya bebek harus merupakan kelipatan dari kapasitas kandang.

Pak Dengklek pergi ke toko yang menjual kandang-kandang dengan lima jenis kapasitas: 1 bebek, 3 bebek, 5 bebek, 11 bebek, dan 13 bebek. Ia ingin membeli satu jenis kandang saja. Kapasitas kandang terbesar manakah yang mungkin Pak Dengklek beli?

Buatlah program yang mengeluarkan kapasitas kandang tersebut.

# Materi
Sejauh ini, kita telah belajar bahwa dengan struktur percabangan if-else, kita bisa meminta program untuk menjalankan salah satu dari dua buah "cabang", bergantung pada nilai kebenaran sebuah kondisi. Sekarang, kita akan belajar bentuk umum dari struktur percabangan if, yang memungkinkan lebih dari satu kondisi dengan tambahan struktur else if.

Bentuk umumnya adalah sebagai berikut:

```
if (<kondisi 1>) {
    // cabang 1
} else if (<kondisi 2>) {
    // cabang 2
} else if (<kondisi 3>) {
    // cabang 3
} else if ... {
... // dst.            
} else {
    // cabang else
}
```

Cabang yang dijalankan adalah cabang pertama yang kondisinya bernilai benar. Jika tidak ada kondisi yang bernilai benar, maka cabang else yang dijalankan (jika ada).

Dengan kata lain, jika ada cabang else, maka pasti tepat satu cabang akan dijalankan. Jika tidak ada, mungkin saja tidak ada cabang yang dijalankan, yakni ketika seluruh kondisi bernilai salah.

Pak Dengklek telah mencoba membuat program di sebelah kanan sesuai konsep di atas. Sayangnya, program tersebut mengeluarkan hasil yang salah: kapasitas kandang yang tercetak ternyata lebih dari satu, bukan hanya yang terbesar. Kira-kira kenapa, ya?

Bantulah Pak Dengklek untuk membetulkan program tersebut.

# Ulasan
Pada mulanya, kode Pak Dengklek mengeluarkan lebih dari satu baris, karena terdapat empat struktur percabangan if:

```
if (total_bebek % 13 == 0) { ... }
if (total_bebek % 11 == 0) { ... }
if (total_bebek % 5 == 0) { ... }
if (total_bebek % 3 == 0) { ... } else { ... }
```

Keempat percabangan if tersebut akan dijalankan semua, sehingga mungkin saja terdapat lebih dari satu kondisi yang bernilai benar.

Sedangkan, kita hanya ingin mengeluarkan kapasitas kandang terbesar. Perhatikan bahwa urutan pengecekan kondisi kapasitas kandang sudah terurut dari terbesar ke terkecil, sehingga kita bisa berhenti mengecek kondisi ketika sudah ada kapasitas kandang yang memenuhi.

else if adalah struktur yang tepat untuk hal di atas.