# Kuis
Ayo kita berlatih kombinasi dari perulangan dan percabangan, juga yang bersarang, plus continue dan break.

1. Berapa buah bintang yang dicetak oleh potongan program berikut?

```
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
}
```

2. Berapa buah bintang yang dicetak oleh potongan program berikut?

```
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        if (j % 2 == 0) {
            cout << "*";
            break;
        }
    }
}
```

3. Berapa buah bintang yang dicetak oleh potongan program berikut?

```
for (int i = 1; i <= 4; i++) {
    if (i % 2 == 0) {
        continue;
    }
    for (int j = 1; j <= i; j++) {
        if ((i + j) % 2 == 0) {
            cout << "*";
        }
    }
}
```

4. Berapa buah bintang yang dicetak oleh potongan program berikut?

Operator / pada bilangan bulat (int) bermakna pembagian yang dibulatkan ke bawah. Sebagai contoh, 47 / 10 menghasilkan 4. (Sisa 7 diabaikan.)

```
int n = 47;
while (true) {
    if (n == 0) {
        break;
    }
    cout << "*";
    n = n / 10;
}
```