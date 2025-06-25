# Materi: include
Sejauh ini, kita selalu mengawali program kita dengan kode #include <iostream>. Sekarang, kita akan mulai sedikit mempelajarinya.

<iostream> merupakah sebuah "header" pada bahasa C++. Header ini memiliki beberapa "fitur"; beberapa di antaranya sudah sering kita gunakan, yaitu:

std::cout
std::endl

Untuk bisa menggunakan kedua fitur di atas, kita perlu "menggunakan" header tersebut dengan perintah #include, yakni:

```
#include <iostream>
```
Terdapat banyak header lainnya pada bahasa C++. Contoh lainnya adalah <string> yang berisi std::string, yang akan dibahas pada soal berikutnya.

# Materi: std::
Kalau Anda perhatikan, kita selalu mengawali penggunaan cout dan endl dengan prefiks std::. Kasarnya, ini karena keduanya merupakan "anggota" dari "namespace" std (singkatan dari "standard").

Untuk mempersingkat kode, biasanya kita ingin agar semua anggota dari namespace std dapat digunakan tanpa prefiks std::. Ini bisa dilakukan dengan menambahkan perintah berikut di awal program:

```
using namespace std;
```

Dengan perintah di atas, untuk menggunakan cout dan endl kita tidak harus lagi mengawalinya dengan std::.

Sebagai contoh, program pertama kita dapat dituliskan secara lebih sederhana sebagai berikut:

```
#include <iostream>
using namespace std;

int main() {
    cout << "Halo, dunia!" << endl;
}
```

yang ekuivalen dengan:

```
#include <iostream>

int main() {
    std::cout << "Halo, dunia!" << std::endl;
}
```

# Kuis
1. Di antara program-program di bawah ini, mana sajakah yang sesuai dengan sintaks bahasa C++? Pilih semua yang memenuhi.

I.
```
int main() {
}
```

II.
```
#include <iostream>

int main() {
    cout << "C++" << endl;
}
```

III.
```
#include <iostream>
using namespace std;

int main() {
    cout << "C++" << endl;
}
```

IV.
```
#include <iostream>
using namespace std;

int main() {
    cout << "C++" << std::endl;
}
```

a. I dan III

b. III dan IV

c. III

d. I, III, dan IV

e. II dan III