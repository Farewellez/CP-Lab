#include <iostream>
#include <string>
using namespace std;

int main(){
    string N, T;
    cin >> N >> T;

    size_t pos; // nilai yang ga didefinisikan
    while ((pos = N.find(T)) != string::npos) // akan bernilai true jika masih ada sub T di N ATAU == npos (ini mustahil karena npos angka yang besar)
    {
        N.erase(pos, T.length());
    }
    
    cout << N << endl;
    return 0;
}
