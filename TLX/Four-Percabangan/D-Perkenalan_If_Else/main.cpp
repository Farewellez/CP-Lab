#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;
    int kandang = 0;
    
    if (total_bebek % 13 == 0) {
        if (kandang < 13){
            cout << 13 << endl;
            kandang = 13;
        }
    }
    if (total_bebek % 11 == 0) {
        if (kandang < 11){
            cout << 11 << endl;
            kandang = 11;
        }
    }
    if (total_bebek % 5 == 0) {
        if (kandang < 5){
            cout << 5 << endl;
            kandang = 5;
        }
    }
    if (total_bebek % 3 == 0) {
        if (kandang < 3){
            cout << 3 << endl;
            kandang = 3;
        }
    } else {
        if (kandang < 1){
            cout << 1 << endl;
            kandang = 1;
        }
    }
}