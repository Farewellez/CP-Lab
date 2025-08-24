#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <climits>
using namespace std;

void print_matrix(vector<vector<int>> is_matrix){
    for (const auto&rmatrix : is_matrix){
        for (int cmatrix : rmatrix){
            cout << cmatrix << " ";
        }
        cout << endl;
    }
}

vector<int> check_matrix(vector<vector<int>> is_matrix, int row, int column){
    vector<int> is_runtuh;

    for (int check_row = 0; check_row < row; check_row++){
        cout << "Cek baris ke-" << check_row << endl;
        bool penuh = true;
        for (int check_column = 0; check_column < column; check_column++){
            if (is_matrix[check_row][check_column] == 0){
                penuh = false;
                print_matrix(is_matrix);
                cout << "Baris ke-" << check_row << " tidak terisi penuh! jangan di clear!\n" << endl;
                break;
            }
        }
        if (penuh){
                print_matrix(is_matrix);
                cout << "Baris ini terisi penuh! clear baris!\n" << endl;
                is_runtuh.push_back(check_row);
            }
    }
    return is_runtuh;
}

void clear_matrix(vector<vector<int>> &is_clearmatrix, vector<int> runtuh ,int R, int C){
    int pointer = 0;
    for (int index_r = 0; index_r < R; index_r++){
        if (index_r == runtuh[pointer]){
            cout << "\nMemulai clear kolom pada baris ke-" << index_r << endl;
            pointer++;
            for (int index_c = 0; index_c < C; index_c++){
                cout << "Membersihkan kolom ke-" << index_c  << ": " << is_clearmatrix[index_r][index_c] << " -> ";
                is_clearmatrix[index_r][index_c] = 0;
                cout << is_clearmatrix[index_r][index_c] << endl;
            }
        }
    }  
}

void runtuh_matrix(vector<vector<int>> &matrix_runtuh, vector<pair<int, int>> list_last_standing, int R, int C){
    int pointer = 0;
    int space = 0;

    for (int column = 0; column < C; column++){
        system("cls");
        cout << "\nMemulai dari kolom ke: " << column << endl;
        print_matrix(matrix_runtuh);
        pair<int, int> standing_block = list_last_standing[pointer];
        int off_row = standing_block.first;
        cout << "List informasi: \n1. Pointer: " << pointer << "\n2. List standing pointer; Baris: " << standing_block.first << " | Kolom: " << standing_block.second << endl;
        cout << "3. Offset row: " << off_row << endl;
        cin >> space;
        for (int row = 0; row < R; row++){
            system("cls");
            cout << endl;
            print_matrix(matrix_runtuh);
            cout << "Cek baris ke-" << row << ": " << matrix_runtuh[row][column] << endl;
            cout << "Offset row sekarang: " << off_row << endl;
            cout << "Syarat break, offset row saat ini: " << off_row << " = " << row << endl; 
            cin >> space;
            if (off_row == row) {
                cout << "Row saat ini: " << row << " = " << off_row << ", selesai cek kolom ke-" << column << endl;
                cin >> space;
                break;
            }
            if (matrix_runtuh[row][column] == 1){
                if (off_row == R){
                    cout << "Baris ke-" << row << " | Kolom ke-" << column << " = " << matrix_runtuh[row][column] << endl;
                    cout << "Offset nya ada di dasar, perlu turun sampai dasar" << endl;
                    cin >> space;
                    system("cls");
                    matrix_runtuh[off_row - 1][column] = matrix_runtuh[row][column];
                    print_matrix(matrix_runtuh);
                    matrix_runtuh[row][column] = 0;
                    cout << "Baris ke-" << row << " | Kolom ke-" << column << " turun baris ke-" << off_row - 1 << endl;
                    cout << "Baris ke-" << row << " diubah ke-" << matrix_runtuh[row][column] << endl;
                    cout << "Offset row sebelum: " << off_row << endl;
                    off_row --;
                    cout << "Offset row sekarang: " << off_row << endl;
                    cin >> space;
                }
                cout << "Baris ke-" << row << " | Kolom ke-" << column << " = " << matrix_runtuh[row][column] << endl;
                matrix_runtuh[off_row - 1][column] = matrix_runtuh[row][column];
                system("cls");
                cout << endl;
                print_matrix(matrix_runtuh);
                matrix_runtuh[row][column] = 0;
                cout << "Baris ke-" << row << " | Kolom ke-" << column << " turun baris ke-" << off_row - 1 << endl;
                cout << "Baris ke-" << row << " diubah ke-" << matrix_runtuh[row][column] << endl;
                cout << "Offset row sebelum: " << off_row << endl;
                off_row --;
                cout << "Offset row sekarang: " << off_row << endl;
                cout << "Syarat break, offset row saat ini: " << off_row << " = " << row - 1<< endl; 
                cout << "\nMelakukan cek apakah next offset row = 1" << endl;
                cout << "Offset row setelah " << off_row << " memiliki value: " << matrix_runtuh[off_row - 1][column] << endl;
                if (matrix_runtuh[off_row - 1][column] == 1){
                    cout << matrix_runtuh[off_row - 1][column] << " = " << 1 << " offset perlu dikurangi lagi" << endl;
                    off_row--;
                }
                cout << "Offset row sekarang: " << off_row << endl;
                cin >> space;
            }
        }
        pointer++;
    }
}

vector<pair<int, int>> last_standing(vector<vector<int>> matrix, int max_runtuh, int deep_row, int column){
    vector<pair<int, int>> last_standing_block;
    // int space = 0;
    for (int col = 0; col < column; col++){
        system("cls");
        cout << "Cek kolom ke-" << col << endl;
        print_matrix(matrix);
        // cin >> space;
        for (int row = max_runtuh; row < deep_row; row++){
            cout << "memulai dari baris ke-" << row << endl;
            cout << "maximal runtuh ada di baris ke-" << max_runtuh;
            cout << " dengan baris paling dasar ada di baris ke-" << deep_row << endl;
            // cin >> space;
            if (matrix[row][col] == 1){
                cout << matrix[row][col] << " = " << "1" << endl;
                // cin >> space;
                last_standing_block.push_back(make_pair(row, col));
                break;
            }
            if (row == deep_row - 1 && matrix[row][col] == 0){
                cout << "Sudah di dasar matrix: " << matrix[row][col] << endl;
                // cin >> space;
                last_standing_block.push_back(make_pair(row + 1, col));
            }
            cout << matrix[row][col] << " = " << matrix[row][col] << endl;
        }
    }

    return last_standing_block;
}

int main(){
    ifstream inputFile("input_file.txt");

    if(!inputFile.is_open()){
        cerr << "Error: Tidak bisa membuka input_file.txt" << endl;
        return 1;
    }
    int R, C;
    inputFile >> R >> C;
    // cin >> R >> C;
    int space = 0;

    string dummy;
    getline(inputFile, dummy);

    vector<vector<int>> matrix(R, vector<int>(C));
    for (int row = 0; row < R; row++){
        string row_str;
        getline(inputFile, row_str);
        if (row_str.empty()){
            row--;
            continue;
        }
        if (row_str.length() != C){
            cerr << "Error: Panjang baris tidak sesuai dengan dimensi matriks." << std::endl;
            return 1;
        }
        for (int col = 0; col < C; col++){
            // cin >> matrix[row][col];
            matrix[row][col] = row_str[col] - '0';
        }
    }
    system("cls");
    cout << "\nMatrix form pertama: " << endl;
    print_matrix(matrix);
    cout << endl;
    cin >> space;
    vector<int> runtuh = check_matrix(matrix, R, C);
    system("cls");
    cout << "\nMatrix form pertama: " << endl;
    print_matrix(matrix);
    cout << "\nBaris yang terisi penuh adalah: ";
    for (const auto& value : runtuh){
        cout << value << " ";
    }
    clear_matrix(matrix, runtuh, R, C);

    cout << endl;
    cin >> space;
    system("cls");
    cout << "\nMatrix setelah menghapus baris isi: " << endl;
    print_matrix(matrix);

    cout << endl;
    cin >> space;
    // cout << "runtuh[runtuh.size() - 1]: " << runtuh[runtuh.size() - 1];
    // cin >> runtuh[runtuh.size() - 1];
    system("cls");
    vector<pair<int, int>> last_standing_block = last_standing(matrix, runtuh[runtuh.size() - 1], R, C);
    system("cls");
    cout << "Matrix: " << endl;
    print_matrix(matrix);
    cout << "\nList last standing block: " << endl;
    for (const auto& block : last_standing_block){
        cout << "Baris: " << block.first << " | Kolom: " << block.second << endl;
    }
    cin >> space;
    system("cls");

    cout << "\nMemulai peruntuhan: " << endl;
    print_matrix(matrix);
    cin >> space;
    runtuh_matrix(matrix, last_standing_block, R, C);
    cin >> space;

    system("cls");
    cout << "\nMatrix: " << endl;
    print_matrix(matrix);
    cin >> space;

    inputFile.close();
    return 0;
}
