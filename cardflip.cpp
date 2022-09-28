#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;

        d = n - x;
        if (x == 0 || x == n)
        {
            cout << 0 << endl;
        }
        else if (d > x || d == x)
        {
            cout << x << endl;
        }
        else if (x > d)
        {
            cout << d << endl;
        }
    }
}