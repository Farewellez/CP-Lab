# Soal
Pak Dengklek memiliki 67 bebek jantan dan 98 bebek betina. Ia ingin menggiring bebek-bebeknya ke sawah. Bebek-bebeknya akan dibariskan dua-dua, tidak peduli dengan jenis kelaminnya (jantan maupun betina). Oleh karena itu, Pak Dengklek ingin mengetahui apakah total banyaknya bebek adalah bilangan genap atau ganjil.

Bantulah Pak Dengklek menentukan hal tersebut, dengan cara melengkapi program di sebelah kanan. Program tersebut harus mengeluarkan salah satu dari kedua baris berikut, yakni baris yang menyatakan hal yang benar:

- total banyaknya bebek adalah bilangan genap
- total banyaknya bebek adalah bilangan ganjil

# Materi
Pada soal ini, kita akan belajar mengenai else pada struktur percabangan if. Mari kita ingat kembali sintaks dari percabangan if:

```
if (<kondisi>) {
    // kode di dalam struktur "if" ini akan dijalankan
    // hanya jika "kondisi" di atas bernilai benar
}
```

Bagaimana kalau kondisinya bernilai salah? Pada bahasa C++, kita bisa menambahkan struktur else di akhir struktur percabangan if. Potongan kode di dalam else akan dijalankan apabila kondisinya bernilai salah.

```
if (<kondisi>) {
    // kode di dalam struktur "if" ini akan dijalankan
    // hanya jika "kondisi" di atas bernilai benar
} else {
    // kode di dalam struktur "else" ini akan dijalankan
    // hanya jika "kondisi" di atas bernilai salah
}
```

Perhatikan bahwa karena kondisi berupa ekspresi boolean, yang hanya memiliki tepat dua nilai (benar atau salah), maka pasti tepat satu potongan kode akan dijalankan: potongan kode di dalam if, atau potongan kode di dalam else.

# Ulasan
Terdapat satu percabangan if pada program kita, yang memiliki "cabang" else. Kondisinya bernilai salah ❌ (total bebek bukanlah genap), oleh karena itu, cabang else yang akan dijalankan.