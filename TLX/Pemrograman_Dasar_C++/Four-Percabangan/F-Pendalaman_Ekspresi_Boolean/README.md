# Materi
Sejauh ini, kita telah belajar ekspresi boolean sederhana, seperti total_baris < 3, total_bebek % 2 == 0, dan sebagainya.

Kali ini, kita akan belajar membuat ekspresi boolean yang merupakan gabungan dari beberapa ekspresi boolean lainnya, dengan menggunakan operator logika:

```
Operator	Makna
&& ("dan")	Ekspresi p && q bernilai benar
            jika dan hanya jika p benar dan q benar

|| ("atau")	Ekspresi p || q bernilai benar
            jika dan hanya jika p benar atau q benar (atau keduanya benar)
```

Sebagai contoh:
- 1 <= n && n <= 10 bernilai benar, saat n bernilai antara 1 sampai dengan 10.
- 5 > 0 || 5 == 0 bernilai benar.
- 5 < 0 || 5 == 0 bernilai salah.

Kita juga bisa menggabungkan lebih dari dua ekspresi, seperti:
1 <= n && n <= 10 && m > 0
bernilai benar, saat n bernilai antara 1 sampai dengan 10, dan m lebih dari 0.

x < 10 || y < 10 || z < 10
bernilai benar, saat salah satu dari x, y, atau z bernilai kurang dari 10.

Kita juga bisa menggabungkan kedua operator tersebut. Sebaiknya menggunakan tanda kurung juga agar tidak ambigu:
(1 <= n && n <= 10) || (1 <= m && m <= 10)

bernilai benar, saat salah satu dari n atau m bernilai di antara 1 sampai dengan 10.

# Kuis
1. Manakah ekspresi boolean yang ekuivalen dengan: n (sebuah variabel bertipe int) memiliki tepat 4 digit?

a. n % 1000 == 0

b. n >= 1000

c. n <= 10000 || n >= 1000

d. 1000 <= n && n <= 10000

e. 1000 <= n && n < 10000

2. Sebuah tahun dikatakan tahun kabisat apabila salah satu dari dua kondisi berikut berlaku:

- tahun tersebut kelipatan 400
- tahun tersebut kelipatan 4, tetapi bukan kelipatan 100

Ekspresi boolean manakah yang ekuivalen dengan: variabel tahun (bertipe int) adalah tahun kabisat?

a. tahun % 400 == 0 || tahun % 4 == 0 || tahun % 100 != 0

b. (tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0

c. tahun % 400 == 0 && (tahun % 4 == 0 || tahun % 100 != 0)

d. tahun % 400 == 0 || tahun % 4 != 100