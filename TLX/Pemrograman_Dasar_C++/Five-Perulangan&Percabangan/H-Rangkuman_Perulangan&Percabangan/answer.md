No.	Answer	Verdict
1	b	    Correct


# Ulasan
Kedua kode tersebut TIDAK ekuivalen.

Pada kode pertama, 5 bintang akan tercetak, yakni pada iterasi i=1, i=3, i=5, i=7, dan i=9.

Pada kode kedua, saat i=0, perintah continue akan dijalankan, namun variabel i tidak pernah sempat berubah. Sehingga, perulangan tidak akan pernah berhenti.

Inilah perbedaannya. Pada perulangan for, operasi akhir (seperti i++) akan tetap dijalankan sebelum iterasi dihentikan oleh continue.