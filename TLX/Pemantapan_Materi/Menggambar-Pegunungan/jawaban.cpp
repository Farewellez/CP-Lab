#include <iostream>
#include <cmath>
using namespace std;

void print_star(int x){
    if (x == 1){
        cout << "*" << endl;
        return;
    }

    print_star(x - 1);
    for (int i = 1; i <= x; i++){
        cout << "*";
    }
    cout << endl;
    print_star(x - 1);
}

int main(){
    // untuk input
    int N;
    cin >> N;
    print_star(N);
    return 0;
}
