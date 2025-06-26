#include <iostream>
using namespace std;

int main() {
    int N = 10;

    if (N % 2 == 0)
    { 
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++)
            {
                if (i < (N/2))
                {
                    if (j == i || j == N - i + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (i == (N/2) || i == (N/2) + 1)
                {
                    if (j == (N/2) || j == (N/2) + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (i > (N/2) + 1)
                {
                    if (j == i || j == N - i + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++)
            {
                if (i < (N/2) + 1)
                {
                    if (j == i || j == N - i + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (i == (N/2) + 1)
                {
                    if (j == (N/2) + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (i > (N/2) + 1)
                {
                    if (j == i || j == N - i + 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
    }
}