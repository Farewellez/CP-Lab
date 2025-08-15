#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

string isPrime(int number){
    if (number <= 1){
        return "BUKAN"; 
    }
    if (number <= 3){
        return "YA";
    }
    int limit = ceil(sqrt(number));
    for (int i = limit; i >= 2; i--){
        if (number%i == 0){
            return "BUKAN";
        }
    }
    return "YA";
}

int main(){
    int Q;
    cin >> Q;

    vector<string> isTrue(Q);
    for (int i = 0; i < Q; i++){
        int number;
        cin >> number;
        string word = isPrime(number);
        isTrue.push_back(word);
    }

    for (string prime : isTrue){
        cout << prime << endl;
    }
    return 0;
}
