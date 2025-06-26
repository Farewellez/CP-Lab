// #include <iostream>
// #include <chrono>

// using namespace std;

// int main()
// {
//     // ukur kecepatan eksekusi
//     auto start = chrono::high_resolution_clock::now();

//     // untuk sisi kandang
//     int sisi_kandang = 121;
    
//     for (sisi_kandang; sisi_kandang < 125; sisi_kandang += 1)
//     {
//         if (sisi_kandang % 2 == 0 && sisi_kandang % 3 != 0)
//         {
//             cout << sisi_kandang << ": ada" << endl;
//         }
//         else
//         {
//             cout << sisi_kandang << ": Tidak ada" << endl;
//         }
//     }

//     // akhir kecepatan eksekusi
//     auto stop = chrono::high_resolution_clock::now();

//     // hitung kecepatan
//     auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
//     cout << "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;
// }
// ---------- Dari Web nya --------------------
#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if (kelipatan_2 && !kelipatan_3) {
            ada_yang_dijual = true;
        }
    }

    if (ada_yang_dijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}