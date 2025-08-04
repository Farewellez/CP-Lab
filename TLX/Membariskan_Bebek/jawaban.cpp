#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    int c = 3001;
    int r = 1;

    int r_new, c_new = 0;

    int pembagi = floor(sqrt(N));
    // cout << pembagi << endl;

    for (int fac = 1; fac <= pembagi; fac++)
    {
        if (N % fac == 0)
        {
            r_new = floor(N / fac);
            c_new = fac;
        }
        if (abs(r_new - c_new) <= abs(c - r))
        {
            c = c_new;
            r = r_new;
        }
    }
    cout << c << " " << r << endl;
}
