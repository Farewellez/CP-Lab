# Rangkuman
- Sebuah larik (misalnya bertipe int) dapat dibuat dengan sintaks berikut:
```
int data[5];
```
- Larik tersebut memiliki 5 elemen: data[0] sampai dengan data[4].
- Dengan kata lain, larik tersebut memiliki indeks 0 sampai dengan 4. Penomoran indeks array dimulai dari 0.
- Untuk mengisi elemen larik, kita bisa menggunakan operator assignment seperti biasa:
```
data[3] = 100;
```
- Kita bisa menginisialisasi larik bersamaan dengan deklarasi larik sebagai berikut:
```
int data[5] = {10, 30, 50, 100, 150};
```
- Salah satu manfaat larik adalah kita bisa menggunakan perulangan untuk iterasi terhadap indeksnya. Sebagai contoh, untuk mencetak seluruh nilai elemen-elemen larik, kita bisa menggunakan:
```
for (int i = 0; i < 5; i++) {
    cout << data[i] << endl;
}
```

- Sebuah larik dapat juga terdiri atas lebih dari satu dimensi, misalnya sebagai berikut:
```
int data[3][4];
```
- Larik tersebut memiliki 12 elemen: data[0][0] sampai dengan data[2][3].

# Kuis Penutup
1. Apakah keluaran dari potongan program berikut?

```
int data[10] = {1, 1, 3, 4, 3, 3, 3, 9, 1, 9};
int hasil = 0;
for (int i = 0; i < 9; i++) {
    if (data[i] == data[i+1]) {
        hasil++;
    }
}
cout << hasil << endl;
```