# Materi
Sampai sejauh ini, kita telah belajar bahwa program C++ menjalankan kode secara berurutan. Kita juga telah belajar bahwa kita bisa menjalankan kode secara berulang-ulang dengan perintah while.

Pada bab ini, kita akan belajar bahwa bahasa C++ juga bisa menjalankan kode secara "bercabang": kode bisa saja dijalankan, atau bisa saja tidak dijalankan, bergantung pada nilai dari suatu kondisi.

Ini bisa dilakukan dengan struktur percabangan if. Sintaksnya adalah sebagai berikut:

```
if (<kondisi>) {

    // kode di dalam struktur "if" ini akan dijalankan
    // hanya jika "kondisi" di atas bernilai benar

}
```

Sama seperti struktur perulangan while, "kondisi" yang dimaksud di sini adalah sebuah ekspresi boolean.

Tentu saja, berbeda dengan perulangan while, kode di dalam struktur if hanya akan dijalankan sekali apabila kondisinya bernilai benar.

# Kuis
1. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 1 + 2 + 3 + 4;

    if (x == 10) {
        cout << "nilai x adalah 10" << endl;
    }
}
```

(Operator == bermakna "sama dengan".)

a. nilai x adalah 10

b. tidak ada keluaran yang dihasilkan

2. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    x *= 2;

    if (x == 3) {
        cout << "nilai x adalah 3" << endl;
    }
}
```

a. nilai x adalah 3

b. tidak ada keluaran yang dihasilkan

3. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 10) {
        cout << "nilai x lebih dari 10" << endl;
    }
    if (x <= 10) {
        cout << "nilai x kurang dari atau sama dengan 10" << endl;
    }
    if (x >= 9) {
        cout << "nilai x lebih dari atau sama dengan 9" << endl;
    }
}
```

a. tidak ada keluaran yang dihasilkan

b. nilai x kurang dari atau sama dengan 10

c.  nilai x kurang dari atau sama dengan 10
    nilai x lebih dari atau sama dengan 9

d. nilai x lebih dari atau sama dengan 9

e. nilai x lebih dari 10
   nilai x lebih dari atau sama dengan 9