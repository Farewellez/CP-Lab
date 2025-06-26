#include <iostream>

using namespace std;

int main()
{
    // for (int i = 0; i < 10; i++) {
    //     if (i % 2 == 0) {
    //         continue;
    //     }
    //     cout << "*";
    // }
    int i = 0;
    while (i < 10) {
        cout << "i sekarang: " << i << endl;
        if (i % 2 == 0) {
            continue;
        }
        cout << "*";
        i++;
    }
}
// perhatikan continue pada while