#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, m, d, f;
    cin >> t;
    while (t--)
    {
        cin >> x >> m >> d;
        f = x * m;
        d = x + d;

        if (f < d)
        {
            cout << f << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
}