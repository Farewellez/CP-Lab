#include <iostream>
using namespace std;

int main() {
    int N = 10;
    int i = 1;

    for (i; i <= N; i++) {
        // cetak i buah "*"
        for (int x = 1; x <= i; x += 1) {
            cout << "*";
        }

        // sisanya, cetak "."
        for (int x = N - i; x > 0; x--) {
            cout << ".";
        }

        cout << endl;
    }
}