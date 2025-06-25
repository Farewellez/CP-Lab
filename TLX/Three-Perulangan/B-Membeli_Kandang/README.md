# Soal
Pak Dengklek memiliki sebuah kandang bebek seluas 12 meter persegi.

Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 7 meter persegi lebih luas daripada kandang sebelumnya.

Lengkapilah program di sebelah kanan agar mengeluarkan ukuran luas kandang-kandang (dalam meter persegi) sesuai urutan pembelian yang harus dilakukan, satu baris untuk setiap kandang, untuk tiga bulan ke depan.

# Ulasan
Pada soal ini, pada dasarnya kita menjalankan kode berikut berulang-ulang sebanyak 3 kali:

```
luas_kandang += 7;
cout << luas_kandang << endl;
```

dengan cara copy-paste.

Selanjutnya, kita akan belajar bagaimana cara menyederhanakannya.