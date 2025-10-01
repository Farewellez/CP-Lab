// APA YANG HARUS DILAKUKAN
// 1. Buat sebuah variable untuk menyimpan berat semangka dari input user (anggap z)
// 2. Cek apakah x + y itu menghasilkan z dengan syarat x dan y itu genap
// 3. Note: Jika z ganjil maka dipastikan tidak ada hasil x dan y memenuhi
// 4. Note: Jika z genap dan z > 2 maka dipastikan ada hasil dari x dan y yang memenuhi
#include <iostream>
using namespace std;

int w;

int main() {
    cin >> w;
    if (w % 2 == 0 && w > 2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
