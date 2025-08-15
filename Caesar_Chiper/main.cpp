#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
using namespace std;

int encrypted(){
    // input untuk kata
    string S;
    cout << "Input kata untuk di enkripsi: ";
    cin >> S;

    // input untuk geser sebanyak k
    int k;
    cout << "Input angka untuk besar geser: ";
    cin >> k;

    // wadah untuk nilai ascii & hasil enkripsi
    int ascii_value;
    char ascii_real;
    string chaesar_chipper;

    // 122: z <-> 97: a

    for (char word : S){
        if (isalpha(word)){
            // casting ke int dan geser sebanyak k
            ascii_value = static_cast<int>(word);
            ascii_value += k;

            // cek apakah lebih dari 122
            if (ascii_value > 122){
                ascii_value -= 122;
                ascii_value += 96; 
            }
            ascii_real = static_cast<char>(ascii_value);
            chaesar_chipper += string(1, ascii_real);
        }
    }

    cout << chaesar_chipper << endl;
    return true;
}

int decrypted(){
    // input kata untuk enkripsi
    string S;
    cout << "Input kata yang ingin di dekripsi: ";
    cin >> S;

    while (true)
    {
        #ifdef _WIN32
        system("cls");
        #elif __linux__ || _APPLE__
        system("clear");
        #endif
        
        // input untuk jumlah geser
        int k;
        cout << "Input angka untuk besar geser: ";
        cin >> k;

        // wadah untuk nilai ascii & hasil enkripsi
        int ascii_value;
        char ascii_real;
        string chaesar_chipper;

        // 122: z <-> 97: a

        for (char word : S){
            if (isalpha(word)){
                // casting ke int dan geser sebanyak k
                ascii_value = static_cast<int>(word);
                ascii_value -= k;

                // cek apakah kurang dari 97
                if (ascii_value < 97){
                    ascii_value -= 97;
                    ascii_value = abs(ascii_value) - 123;
                }
                ascii_real = static_cast<char>(abs(ascii_value));
                chaesar_chipper += string(1, ascii_real);
            }
        }
        cout << chaesar_chipper << endl;
        
        int isSesuai;
        cout << "apakah sudah sesuai? \n1. ya\n2. tidak\n-> ";
        cin >> isSesuai;
        if (isSesuai == 1){
            return 0;
        }
        else if (isSesuai == 2){
            continue;
        }
    }
    
}

int main(){
    while (true)
    {
        #ifdef _WIN32
        system("cls");
        #elif __linux__ || _APPLE__
        system("clear");
        #endif
        
        int choice;
        cout << "Apa yang mau kamu lakukan?\n1. enkripsi caesar chiper\n2. dekripsi caesar chiper\n-> ";
        cin >> choice;
        if (choice == 1){
            int result = encrypted();
            if (encrypted){
                return 0;
            }
        }
        else if (choice == 2){
            int result = decrypted();
            if (decrypted){
                return 0;
            }
        }
        else{
            cout << "Tidak valid" << endl;
        }
    }
    return 0;
}
