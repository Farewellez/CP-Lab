#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};

    int harga_total[3] = {0,0,0};

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 2; j ++)
        {
            // cout << luas[i][j] << " dibagi " << harga_jual[j];
            // cout << " = " <<  luas[i][j] / harga_jual[j] << endl;
            harga_total[j] += luas[i][j] * harga_jual[j];
            // cout << "Harga total merek-" << j << " = " << harga_total[j] << endl;
        }
        cout << "\n";
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << harga_total[i] << endl;
    }
    
}
