#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int N, M, X;
    cin >> N >> M >> X;

    vector<vector<int>> matrix(N, vector<int>(M)); 
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            int value;
            cin >> value;

            matrix[i][j] = value;
        }
    }
    for (int i = 0; i < X; ++i)
    {
        string input_p;
        cin >> input_p;
        if (input_p == "_"){
            for (int baris = 0; baris < N / 2; baris++){
                for (int kolom = 0; kolom < M; kolom++){ 
                    swap(matrix[baris][kolom], matrix[N - baris - 1][kolom]);
                } 
            }
        }
        else if (input_p == "|"){
            for (int baris = 0; baris < N; baris++){
                for (int kolom = 0; kolom < M / 2; kolom++){ 
                    swap(matrix[baris][kolom], matrix[baris][M - kolom - 1]);
                }
            }
        }
        else
        {
            int rotasi = stoi(input_p);
            rotasi %= 360;
            if (rotasi < 0) rotasi += 360;

            int num_rotasi = rotasi / 90;
            for (int enume = 0; enume < num_rotasi; enume ++){
                vector<vector<int>> clone_matrix(M, vector<int>(N));
                for (int baris = 0; baris < N; baris++){
                    for (int kolom = 0; kolom < M; kolom++){
                        clone_matrix[kolom][N - baris - 1] = matrix[baris][kolom];
                    }  
                }
    
                matrix = clone_matrix;
    
                int temp = N;
                N = M;
                M = temp;                
            }
        }
    } 

    for (const auto& row : matrix){
        for (int value : row){
            cout << value << " ";
        }
        cout << endl;
    }
}   

