#include <iostream>
#include <vector>
using namespace std;

// when bro memutuskan tidak menggunakan AI dan memilih untuk menghitung manual di kertas
// EUREKA JIR!!!
 
int main(){
    int N; // baris untuk matrix 1
    cin >> N;
    
    int M; // kolom untuk matrix 1 dan baris untuk matrix 2
    cin >> M;

    int P; // kolom untuk matrix 2
    cin >> P;

    // untuk menampung/wadah matrix 1
    vector<vector<int>> matrix_1(N, vector<int>(M));
    // untuk menampung/wadah matrix 2
    vector<vector<int>> matrix_2(M, vector<int>(P));
    
    // untuk menampung/wadah matrix hasil kali matrix 1 dan matrix 2
    vector<vector<int>> matrix_hasil(N, vector<int>(P));

    // mulai dari matrix 1
    for (int r = 0; r < N; r++){ // baris
        for (int c = 0; c < M; c++){ // kolom
            int value1; // untuk elemen matrix ke-ij
            cin >> value1; // untuk input nilai i dan j

            matrix_1[r][c] = value1;
        }
    }

    // lanjut matrix 2
    for (int r = 0; r < M; r++){ // baris
        for (int c = 0; c < P; c++){ // kolom
            int value2; // untuk elemen matrix ke-ij
            cin >> value2; // untuk input nilai i dan j

            matrix_2[r][c] = value2;
        }
    }

    // cetak matrix 1
    for (const auto& row : matrix_1){
        for (int value : row){
            cout << value << " ";
        }
        cout << endl;
    }

    cout << endl;

    // cetak matrix 2
    for (const auto& row2 : matrix_2){
        for (int value : row2){
            cout << value << " ";
        }
        cout << endl;
    }

    // operasi perkalian matrix
    for (int i = 0; i < N; i++){
        for (int j = 0; j < P; j++){
            for (int m = 0; m < M; m++){
                matrix_hasil[i][j] += matrix_1[i][m] * matrix_2[m][j];  
            }
        }
    }

    cout << endl;

    // cetak hasil kali matrix
    for (const auto& row3 : matrix_hasil){
        for (int value : row3){
            cout << value << " ";
        }
        cout << endl;
    }

}
