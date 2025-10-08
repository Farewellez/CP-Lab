// 1. Buat variable buat nampung nilai dari T
// 2. Looping sebanyak T kali dan input nilai N
// 3. Cek nilai N apakah memenuhi kriteria agak prima
// 4. Gunakan looping dari 2 - sqrt(N) -> di modulo N
// 5. Buat wadah juga untuk nampung batas check faktor
// 6. Jika faktor > 2 itu berarti false

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int T; // untuk berapa banyak bilangan yang ingin dicek
vector<string> isTrue;

void isSedikitPrima(int number) {
    int batas = floor(sqrt(number));
    int faktor = 0; // disini cukup cek jika lebih dari 1 maka false

    if (number == 2 || number == 1){
            isTrue.push_back("YA");;
            return;
    }

    for (int i = 2; i <= batas; i++){
        if (number % i == 0){
            if (i == number/i){
                faktor++;
            }
            else{
                faktor +=2;
            }
            if (faktor > 2){
                isTrue.push_back("BUKAN");
                return;
            }
        }
    }
    isTrue.push_back("YA");
}

int main() {
    cin >> T;

    for (int _ = 0; _ < T; _++) {
        int N;
        cin >> N;
        // langsung cek dengan function isSedikitPrima
        isSedikitPrima(N);
    }

    for (const auto&value : isTrue){
        cout << value << endl;
    }
}
