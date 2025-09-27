#include <iostream>
#include <map>
#include <string>
using namespace std;

char pesan_pertama_asli[501];
char pesan_pertama_diubah[501];
char pesan_kedua_asli[501]; // => yang dicari
char pesan_kedua_diubah[501];

int N; // => untuk input

bool check_rules(){
    // nyangkut di for loop
    for (int first = 0; first < N - 1; first++){
        for (int second = first + 1; second < N; second++){
            if (pesan_pertama_asli[first] == pesan_pertama_asli[second]){ 
                if (pesan_pertama_diubah[first] != pesan_pertama_diubah[second]){
                    return false;
                }
            } 
            
            if (pesan_pertama_diubah[first] == pesan_pertama_diubah[second]){ 
                if (pesan_pertama_asli[first] != pesan_pertama_asli[second]){
                    return false; // Ambigu! Pak Dengklek Bingung!
                }
            } 
        }
    }
    // nyangkut di for loop
    return true;
}

int main(){
    cin >> N;
    for (int i = 0; i < 3; i++){
        if (i == 0){
            cin >> pesan_pertama_asli;
        }
        else if (i == 1){
            cin >> pesan_pertama_diubah;
        }
        else{
            cin >> pesan_kedua_diubah;
        }
    }

    bool isTrue = check_rules();
    if (!isTrue){
        cout << "Pak Dengklek bingung" << endl;
        return 0;
    }

    map<char, char> pair;
    for (int len = 0; len < N; len++){
        pair[pesan_pertama_diubah[len]] = pesan_pertama_asli[len];
    }

    for (int value_one = 0; value_one < N; value_one++){
        for (const auto& value_two : pair){
            if (pesan_kedua_diubah[value_one] == value_two.first){
                pesan_kedua_asli[value_one] = value_two.second;
                break;
            }
            pesan_kedua_asli[value_one] = '?';
        }
    }

    cout << pesan_kedua_asli << endl;
    return 0;
}
