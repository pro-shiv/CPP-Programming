#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, g1, s1, b1, g2, s2, b2, c1, c2;
    cin >> t;
    while (t--)
    {
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        c1 = g1 + s1 + b1;
        c2 = g2 + s2 + b2;
        if (c1 > c2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}