#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++)
        {

            p = p * a[j];
        }
        cout << p << endl;
        if (p < 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}