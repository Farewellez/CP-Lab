#include <iostream>
#include <cstring>
using namespace std;
int n; // 1 <= n <= 100
char words[101]; // 1 - 100 char
void print_words() {
    if (strlen(words) <= 10){
        cout << words << endl;
        return;
    }
    int number = 0;
    for (int value = 0; value < strlen(words); value++){
        if (value != 0 && value != strlen(words) - 1){
            number++;
        }
    }
    cout << words[0] << to_string(number) << words[strlen(words) - 1] << endl;
}
int main() {
    cin >> n;
    for (int _ = 0; _ < n; _++){
        cin >> words;
        print_words();   
    }
}
