# Materi: Penamaan Variabel
Beberapa aturan dasar dari penamaan variabel pada bahasa C++ adalah sebagai berikut:

1. Nama variabel hanya boleh terdiri atas huruf (a-z, A-Z), angka (0-9), dan garis bawah (_).
2. Nama variabel tidak boleh diawali dengan angka.
3. Nama variabel bersifat case-sensitive. Sebagai contoh, sandi dan Sandi menyatakan dua variabel yang berbeda.

# Materi: Pendefinisian Variabel
Perintah seperti ini:

```
int sandi = 174;
```

disebut definisi variabel. Beberapa aturannya adalah sebagai berikut:

1. Kita dapat mendefinisikan dua atau lebih variabel dengan tipe data yang sama, dalam satu perintah. Variabel-variabel tersebut dipisahkan dengan tanda koma:

```
int tanggal = 15, tahun = 2023;
```

2. Kita boleh saja untuk tidak memberi nilai awal saat pendefinisian variabel. Misalnya:

```
int sandi;
int tanggal, tahun = 2023;
```

Akan tetapi, sebelum variabel digunakan, jangan lupa untuk diberi nilai dahulu. Misalnya:

```
int sandi;

// banyaknya bebek di kandang
int total_bebek = 174;

// sandi bulan pertama adalah banyaknya bebek
sandi = total_bebek;
cout << sandi << endl;
```

# Materi: Tipe Data Variabel
Tipe data variabel tidak bisa berubah. Misalnya, apabila sebuah variabel diberi tipe int, maka variabel tersebut tidak akan pernah bisa diberi nilai berupa string, begitu pula sebaliknya. Variabel tersebut juga tidak bisa didefinisikan ulang dengan tipe yang berbeda.


# Kuis
1. Manakah yang merupakan nama variabel yang sesuai sintaks bahasa C++?

a. empat sekawan

b. 4_sekawan

c. empatSekawan_

d. empat-sekawan

e. empat$ekawan

2. Manakah potongan program yang TIDAK sesuai sintaks bahasa C++?


a
```
std::string sandi_lama = "5";
int sandi_baru = sandi_lama;
```

b
```
int sandi;
std::string Sandi;
```

c
```
int sandi = 5;
sandi = 6;
```

d
```
int a, b, c, d;
```

e

```
int a = 1, b;
b = a;
```