# Materi
Sejauh ini, pada setiap program C++ kita, kita selalu menuliskan kode di dalam sebuah "blok" berikut:

```
int main() {
    ...
}
```

Setelah mengerjakan soal-soal pada bab ini, sadarkah Anda bahwa main() merupakan sebuah fungsi?

main() merupakan sebuah fungsi khusus pada C++, yang harus ada pada setiap program C++. Secara sederhana, ketika program dijalankan, fungsi ini akan dipanggil. Sehingga, kode yang ada di dalam fungsi main() ini akan dijalankan.

Perhatikan bahwa fungsi ini tidak menerima parameter.

Fungsi main() mengembalikan nilai bertipe int. Untuk menandakan bahwa program berjalan dengan sukses (tanpa error), kita dapat mengembalikan nilai 0. Nilai selain 0 akan dianggap error oleh sistem operasi.

Namun, kalau Anda perhatikan, selama ini kita tidak pernah memanggil perintah return pada fungsi ini. Khusus untuk fungsi main(), jika tidak sampai fungsi berakhir tidak ada perintah return yang dijalankan, maka nilai kembaliannya akan dianggap 0 (yang berarti program sukses berjalan).

# Kuis
1. Berapa kalikah tanda bintang tercetak oleh program berikut?

```
#include <iostream>
using namespace std;

int main() {
    if (1 + 1 == 2) {
        cout << "*" << endl;
        return 0;
    }
    cout << "*" << endl;
}
```
