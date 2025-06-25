#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int bulan = 0;

    while (bulan < 3) {
        luas_kandang += 7;
        cout << luas_kandang << endl;
        bulan +=1;
    }
}