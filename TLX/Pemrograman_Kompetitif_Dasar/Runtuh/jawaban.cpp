// 1. Cari baris yang semua kolomnya itu adalah kotak hitam ('1')
// 2. Untuk setiap kolom hitung ada berapa banyak kotak hitam diatas baris terbawah
// 3. Untuk setiap kolom runtuhkan kotak hitam
// 4. [paling penting] Jika di step 1 masih ada baris terbawah, ulangi step 1 dengan grid baru
#include <iostream>
using namespace std;

int R, C;
char matrix[20][8];

int findLastRow(){
    int last_row = 0;
    for (int row = 0; row < R; row++){
        bool ContainAllBlackPixel = true;
        for (int col = 0; col < C; col++){
            if (matrix[row][col] != '1'){
                ContainAllBlackPixel = false;
            }
        }
        if (ContainAllBlackPixel){
            last_row = row;
            for (int col = 0; col < C; col++){
                matrix[row][col] = '0';
            }
        }
    }
    return last_row;
}

int countAllBlackPixel(int last_row, int column){
    int totalBlack = 0;
    for (int row = 0; row < last_row; row++){
        if (matrix[row][column] == '1'){
            totalBlack++;
        } 
    }
    return totalBlack;
}

void Collaps(int last_row, int blackPixel, int col){
    for (int row = last_row; row >= 0; row--){
        if (row > last_row - blackPixel)
            matrix[row][col] = '1';
        else
            matrix[row][col] = '0';
    }
}

int findLastRowToFall(int last_row, int col){
    for (int row = last_row; row < R; row++){
        if (matrix[row + 1][col] == '1' || row == R)
            return row;
    }
    return R - 1;
}
int main(){
    // isi matrix
    cin >> R >> C;
    for (int row = 0; row < R; row++){
        for (int col = 0; col < C; col++){
            cin >> matrix[row][col];
        }
    }

    int last_row = findLastRow();
    while (last_row > 0)
    {
        for (int col = 0; col < C; col++){
            int BlackPixel = countAllBlackPixel(last_row, col);
            int lastRowToFall = findLastRowToFall(last_row, col);
            Collaps(lastRowToFall, BlackPixel, col);
        }
        last_row = findLastRow();
    }

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
