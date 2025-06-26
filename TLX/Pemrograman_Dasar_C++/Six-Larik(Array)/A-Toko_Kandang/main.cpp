#include <iostream>
using namespace std;

int main() {
    int luas1 = 225 * 335;
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    int hasil = 0;

    if (80000 <= luas1) {
        hasil++;
    }

    if (80000 <= luas2) {
        hasil++;
    }

    if (80000 <= luas3) {
        hasil++;
    }

    if (80000 <= luas4) {
        hasil++;
    }

    if (80000 <= luas5) {
        hasil++;
    }

    // cout << luas1 << endl;
    // cout << luas2 << endl;
    // cout << luas3 << endl;
    // cout << luas4 << endl;
    // cout << luas5 << endl;

    cout << hasil << endl;
}