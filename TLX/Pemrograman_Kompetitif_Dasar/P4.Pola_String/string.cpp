// APA YANG HARUS DILAKUKAN
// 1. Buat sebuah char list yang menerima input char 0 <= input_user <= 255
// 2. Cari N² yang mungkin atau mendekati total char dari input user
// 3. Buat tiap char input menjadi matrix ukuran N x N dengan urutan seperti ular kanan -> bawah -> kiri -> bawah -> kanan -> bawah -> dst
// 4. Jika ada kotak sisa maka isi dengan '.'
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

char line_char[256]; // step 1

int mencari_kuadrat(int size){
    int number = 0;
    if (size == 0) return 0;
    while ((number*number) < size)
    {
        number++;
    }
    return number;
}

void matrix_produce(int N, int size){
    vector<vector<char>> matrix(N, vector<char>(N));
    int index = 0;
    for (int row = 0; row < N; row++){
        if (row % 2 != 0 & row > 0){
            for (int col = N - 1; col >= 0; col--){
                if (index >= size){
                    matrix[row][col] = '.';
                }
                else{
                    matrix[row][col] = line_char[index];
                    index++;
                }
            }
        }
        else{
            for (int col = 0; col < N; col++){
                if (index >= size){
                    matrix[row][col] = '.';
                }
                else{
                    matrix[row][col] = line_char[index];
                    index++;
                }
            }
        }
    }
    for (const auto&row : matrix){
        for (char value : row){
            cout << value;
        }
        cout << endl;
    }
}

int main(){
    cin >> line_char;
    int size =  strlen(line_char);
    // cout << line_char << endl; // test debug step 1

    int N_value = mencari_kuadrat(size);
    // cout << N_value << endl; // test debug step 2

    matrix_produce(N_value, size);
}
