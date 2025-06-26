# Soal
Pak Dengklek memiliki 100 kandang, dinomori dari 1 sampai 100. 

Setiap kandang memiliki lampu yang terhubung saklar. Pada mulanya, seluruh lampu kandang dalam kondisi mati.

Iseng-iseng, Pak Dengklek akan melakukan hal berikut setiap jam, dimulai dari pukul 1 sampai dengan pukul 10:

- Pada pukul p, Pak Dengklek akan menekan setiap saklar lampu kandang yang nomornya merupakan kelipatan p.

Ketika saklar lampu sebuah kandang ditekan, lampu yang tadinya mati akan menyala, dan sebaliknya: lampu yang tadinya menyala akan menjadi mati.

Setelah keseluruhan proses selama 10 jam tersebut dilakukan, ada berapa lampu yang menyala? Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya lampu yang menyala pada akhirnya.

# Materi
Untuk menyelesaikan soal ini, kita dapat membuat sebuah larik lampu yang bertipe boolean. Jika lampu kandang ke-
i menyala, kita isi lampu[i] dengan true. Sebaliknya, jika lampu kandang ke-i mati, kita isi lampu[i] dengan false.

Perhatikan bahwa akan lebih mudah jika indeks larik lampu sesuai dengar nomor kandang sesungguhnya, yakni dimulai dari 1 (bukan 0). Kita bisa mengakalinya dengan membuat larik yang berukuran 101, dan memakai indeks 1 sampai 100 (indeks 0 sengaja tidak terpakai). Sehingga, kondisi awal dari larik lampu adalah sebagai berikut:

```
i	lampu[i]
    (= apakah lampu kandang no. i menyala?)
0	(tidak peduli karena tidak terpakai)
1	false
2	false
...	...
100	false
```

Dengan berbekal larik ini, kita bisa menyimulasikan tindakan Pak Dengklek setiap jamnya. Setiap kali Pak Dengklek menekan saklar lampu kandang ke-i, kita dapat memperbarui nilai dari lampu[i].