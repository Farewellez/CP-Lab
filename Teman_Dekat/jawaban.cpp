#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

long long longPow(long long base, long long power){
    long long result = 1;
    for (int i = 0; i < power; i++){
        result *= base;
    }

    return result;
}

long long Tij(int x1,int y1, int x2, int y2, int d){
    long long result_x = llabs(x2 - x1);
    long long result_y = llabs(y2 - y1);

    return longPow(result_x, d) + longPow(result_y, d);
}

int main(){
    // wadah nilai terbesar dan terkecil
    long long max = LONG_MIN;
    long long min = LONG_MAX;

    int N, D; // buat total murid & konstanta
    cin >> N >> D;

    // wadah buat faktor x dan y
    vector<int> faktor_x(N, 0), faktor_y(N, 0);

    // isi faktor x dan y
    for (int i = 0; i < N; i++){
        // untuk nilai faktor xs
        int x_value;
        cin >> x_value;
        // untuk nilai faktor y
        int y_value;
        cin >> y_value;

        // isi vector
        faktor_x[i] = x_value;
        faktor_y[i] = y_value;
    }

    for (int ref_pointer = 0; ref_pointer < N - 1; ref_pointer++){
        for (int pointer = ref_pointer + 1; pointer < N; pointer++){
            // cout << "Reference Pointer: " << ref_pointer << endl;
            // cout << "Pointer: " << pointer << endl;
            if (max < Tij(faktor_x[ref_pointer], faktor_y[ref_pointer], faktor_x[pointer], faktor_y[pointer], D)){
                max = Tij(faktor_x[ref_pointer], faktor_y[ref_pointer], faktor_x[pointer], faktor_y[pointer], D);
            }

            if (min > Tij(faktor_x[ref_pointer], faktor_y[ref_pointer], faktor_x[pointer], faktor_y[pointer], D)){
                min = Tij(faktor_x[ref_pointer], faktor_y[ref_pointer], faktor_x[pointer], faktor_y[pointer], D);
            }
        }
    }

    cout << min << " " << max;
}
