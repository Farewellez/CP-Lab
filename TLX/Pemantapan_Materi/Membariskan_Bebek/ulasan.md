Ulasan dari TLX seperti ini
<img width="833" height="712" alt="image" src="https://github.com/user-attachments/assets/7473fc1e-f8c1-49d3-8a5d-25fa4d081a7d" />


Namun dari aku simpel saja. Aku anggap kalian sudah paham logika tentang baris dan kolomnya, sekarang fokus pada algoritma dari pencarian faktorial N nya <br> 
Anggap saja aku ambil sebuah bilangan bulat 9, coba cari a dikali a atau bisa disebut a<sup>a = 9 atau mendekati 9 <br>
Hasilnya jelas 3, yakni 3<sup>3 = 9 <br>
Dari sini dapat diambil kesimpulan seluruh bilangan bulat x dimana 1 <= x <= 3, dimana 9 % x = 0. Maka itu pasti adalah selisih terkecil faktor dari 9 <br>
Berarti diantara angka: 1, 3 jika dibagi dengan 9 dan memiliki hasil maka salah satu dari pembagi adalah hasil dari soal ini, semisal:
```
karena tadi sudah dapat 1, 3 (kenapa 2 tidak masuk? karena 9%2 !=0)
case 1:
9 / 3 = 3
c = 3
r = 3

case 2:
9 / 1 = 9
c = 9
r = 1
```
Dari kedua hasil itu selisih dari c dan r paling kecil adalah 3 dan 3 yang hasilnya adalah 0<br>
Hal ini bisa kalian coba juga dengan kasus bilangan ganjil dan prima, bedanya ketika sqrt(N) atau akar kuadrat dari N itu menghasilkan bukan bilangan bulat, maka perlu dibulatkan dulu ke bawah menggunakan floor agar menjadi bilangan bulan <br>
Contoh: <br>
N = 17 <br>
sqrt(17) itu adalah 4,123105625617661 <br>
Bulatkan ke bawah jadinya adalah 4. Artinya selisih paling kecil antara 2 bilangan bulat yang jika dikalikan menghasilkan X itu salah satunya pasti ada di antara 1 <= x <= 4
