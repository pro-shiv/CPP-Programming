#include <bits\stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows :";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows * 2 - 1; j++)
        {
            if (j >= i && j <= rows * 2 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}