#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 1 && n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
            for (int j = 0; j < n + 2; j++)
            {
                if (i == 2)
                {

                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "*";
            cout << endl;
        }

        for (int k = 0; k < ceil(n / 2); k++)
        {
            if
        }
        cout << endl;
    }
}