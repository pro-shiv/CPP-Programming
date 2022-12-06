#include <bits\stdc++.h>

using namespace std;

int main()
{
    int k = 0, rows, n;
    cout << "Enter the number of rows :";

    cin >> rows;
    n = (rows + 1) / 2;
    for (int i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= n)
                k++;
            if (i > n + 1)
                k--;
        }
        else
        {
            i <= n ? k++ : k--;
        }
        for (int j = 1; j <= rows; j++)
        {
            if (j >= n + 1 - k && j <= n - 1 + k)
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