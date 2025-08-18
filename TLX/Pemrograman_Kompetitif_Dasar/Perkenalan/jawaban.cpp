#include <iostream>
#include <vector>
using namespace std;

int main(){
    // input masukkan baris x kolom
    int M, N;
    cin >> M >> N;

    // wadah matrix
    vector<vector<int>> matrix(M, vector<int>(N));

    // banyak elemen matrix
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            int value;
            cin >> value;
    
            matrix[i][j] = value;
        }
    }

    // for (const auto& row : matrix){
    //     for (int value : row){
    //         cout << value << " ";
    //     }
    //     cout << endl;
    // }

    cout << endl;

    // int pivot_M = M; // isi baris 4
    for (int baris = 0; baris < N; baris++){
        for (int kolom = M - 1; kolom > -1; kolom--){
            cout << matrix[kolom][baris] << " ";
            // pivot_M --;
        }
        cout << endl;
    }   
}
