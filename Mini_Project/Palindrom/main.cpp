#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

bool palindrom(string s) {
    if (s == "")
    {
        cout << "+-------------------------------------------------------\n" << s << "(NULL): False" << endl;
        cout << "|" << endl;
        return false;
    }
    if (s.length() % 2 == 0)
    {
        cout << "+-------------------------------------------------------\n" <<  s << " (GENAP): " << endl;
        cout << "|" << endl;
        if (s.length() == 2)
        {
            cout << "|" << endl;
            cout << "|-> " << s << " memiliki panjang: " << s.length() << endl;
            cout << "|\t|\n|\t|-> Apakah " << s[0] << " != " << s[1] << " ?" << endl;
            if (s[0] != s[1])
            {
                cout << "|\t|\t|-> YA, " << s[0] << " != " << s[1] << "-> False" << endl;
                return false;
            }
            cout << "|\t|\n|\t|-> TIDAK, " << s[0] << " == " << s[1] << " -> True" << endl;
            return true;
        }
        cout << "|-> Apakah " << s[0] << " != " << s[s.length() - 1] << " ?" << endl;
        if (s[0] != s[s.length() - 1])
        {
            cout << "|\t|-> YA, " << s[0] << " != " << s[s.length() - 1] << "-> False" << endl;
            return false;
        }
        cout << "|\t|\n|\t|-> TIDAK, " << s[0] << " == " << s[s.length() - 1] << endl;
        cout << "@@@@@@ Panjang " << s << " saat ini adalah: " << s.length() << " @@@@@@" << endl;
        cout << "|-> mulai rekursif " << s << " dari " << s.substr(1,s.length() - 2) << endl;
        return palindrom(s.substr(1,s.length() - 2));
    }
    else
    {
        cout << "+-------------------------------------------------------\n" << s << " (GANJIL): " << endl;
        cout << "|" << endl;
        if (s.length() <= 1)
        {
            cout << "|-> " << s << " memiliki sisa panjang: " << s.length() << " char" << endl;
            cout << "|\t|\n|\t|-> True" << endl;
            return true;
        }
        cout << "|-> Apakah " << s[0] << " != " << s[s.length() - 1] << " ?" << endl;
        if (s[0] != s[s.length() - 1])
        {
            cout << "|\t|-> YA, " << s[0] << " != " << s[s.length() - 1] << "-> False" << endl;
            return false;
        }
        cout << "|\t|\n|\t|-> TIDAK, " << s[0] << " == " << s[s.length() - 1] << endl;
        cout << "@@@@@@ Panjang " << s << " saat ini adalah: " << s.length() << " @@@@@@" << endl;
        cout << "|-> mulai rekursif " << s << " dari " << s.substr(1,s.length() - 2) << endl;
        return palindrom(s.substr(1,s.length() - 2));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main(int argc, char* argv[]) {
    if (argc > 1)
    {
        string argument1 = argv[1];
        cout << "+-----++\\ " << endl;
        cout << "||+-----+\\ " << endl;
        cout << "||       /  A L I N D R O M   C H E C K E R" << endl;
        cout << "||______/  ---------------------------------" << endl;
        cout << "||" << endl;
        cout << "||" << endl;
        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n>> Program Palindrom dijalankan...\n|\n|" << endl;

        cout << palindrom(argument1) << endl;
    }
    else
    {
        cout << "Penggunaan: ./palindrom <string>" << endl;
    }
}
