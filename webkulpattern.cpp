#include <bits\stdc++.h>
using namespace std;

int main()

{
    int k = 0, n, a;

    cout << "enter odd number ";
    cin >> n;
    a = ((n + 4) / 2) + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 4; j++)
        {

            if (j == 1 || j == n + 4 || i == n)
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
    for (int i = 1; i <= n; i++)
    {
        i > (n / 2) + 1 ? k-- : k++;

        for (int j = 1; j <= a; j++)
        {
            if (j >= a + 1 - k)

            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}