# Materi
Dalam bahasa C++, kita bisa menyingkat penulisan operasi assignment yang berbentuk:

```
variabel = variabel operator ekspresi;
```

menjadi

```
variabel operator= ekspresi;
```

Penyingkatan berlaku untuk operator aritmetika.

Sebagai contoh:

```
Operasi Assignment	Ekuivalen dengan
x = x + 1;          x += 1;
x = x + y + 3;      x += y + 3;
x = x * 2;          x *= 2;
... dst.	 
```

Dengan penulisan yang dipersingkat ini, operasi assignment menjadi lebih mudah untuk "dibaca":

```
Operasi Assignment	"Dibaca"
x += 1;
Nilai dari variabel x bertambah sebesar 1.

x += y + 3;
Nilai dari variabel x bertambah sebesar nilai dari variabel y ditambah 3.

x *= 2;
Nilai dari variabel x menjadi 2 kali lipatnya.
```

# Kuis
1. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 3, y = 4;

    x -= 1;
    y += x * 5;

    cout << y << endl;
}
```

2. Semua operasi di bawah ini bermakna sama, KECUALI:


a. x += x;

b. x *= 2;

c. x = x + 2;

d. x = 2 * x;

e. x = x + x;