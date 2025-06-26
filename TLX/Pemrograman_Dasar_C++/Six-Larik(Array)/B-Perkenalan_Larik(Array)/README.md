# Materi
Pada soal sebelumnya (Toko Kandang), terdapat 5 nilai luas kandang, yang kita simpan ke dalam 5 variabel berbeda. Dengan kata lain, kita membuat satu variabel untuk masing-masing nilai.

Bayangkan apabila terdapat lebih banyak lagi nilainya, atau banyaknya nilai tidak tentu (dinamis). Apakah ada cara yang lebih efisien?

Untungnya, pada C++, kita bisa menggunakan larik (array), yaitu satu variabel yang bisa menyimpan lebih dari satu nilai. Sintaksnya adalah sebagai berikut:

```
<tipe> <nama variabel>[<ukuran larik>];
```

Sebagai contoh:

```
int luas[5];
```

menyatakan sebuah variabel luas yang merupakan larik bilangan bulat, yang terdiri atas 5 elemen: luas[0], luas[1], luas[2], luas[3], dan luas[4]. Masing-masing elemen dapat menyimpan satu nilai.

Bilangan (bulat) di dalam tanda kurung siku [ ] disebut dengan indeks. Pada C++, penomoran indeks dimulai dari 0.

Dengan larik ini, kita bisa menyimpan data nilai luas kandang Pak Dengklek. Ilustrasinya sebagai berikut:

Indeks	Elemen	    Nilai
0	    luas[0]	    = hasil perkalian 225×335
1	    luas[1]	    = hasil perkalian 215×394
2	    luas[2]	    = hasil perkalian 198×400
3	    luas[3]	    = hasil perkalian 314×298
4	    luas[4]	    = hasil perkalian 299×278

Indeks dapat berupa variabel/ekspresi. Sebagai contoh, apabila diketahui i bernilai 3, maka luas[i] ekuivalen dengan luas[3].

# Soal
Sekarang, kita akan coba menyelesaikan soal yang sama dengan bantuan larik. Lengkapilah program di sebelah kanan menggunakan konsep yang telah kita pelajari.