# Rangkuman
- Kita dapat menggunakan struktur percabangan if untuk menjalankan (atau tidak menjalankan) suatu kode, berdasarkan suatu kondisi.
- Sintaks percabangan if:
```
if (<kondisi>) {
    // dijalankan hanya jika kondisi bernilai benar
}
```

- Percabangan if dapat memiliki lebih dari satu kondisi, dengan tambahan cabang else if:
```
if (<kondisi1>) {
    // cabang 1
} else if (<kondisi2>) {
    // cabang 2
} else if ... {
... // dst.
}
```

Cabang yang dijalankan adalah cabang pertama yang kondisinya bernilai benar.

- Cabang else dapat ditambahkan di akhir if (atau else if terakhir). Cabang ini akan dijalankan ketika tidak ada kondisi yang bernilai benar.

# Kuis Penutup
1. Apakah kedua kode berikut ekuivalen?

```
if (<kondisi1>) {
    ...
} else if (<kondisi2>) {
    ...
} else {
    ...
}
if (<kondisi1>) {
    ...
} else {
    if (<kondisi2>) {
        ...
    } else {
        ...
    }
}
```

a. ya

b. tidak