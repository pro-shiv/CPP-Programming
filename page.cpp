#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, d;
    cin >> t;

    while (t--)
    {

        cin >> x;
        d = x / 25;
        if (x < 25)
        {
            cout << 1 << endl;
        }
        else if (x % 25 == 0)
        {

            cout << d << endl;
        }
        else
        {

            d += 1;
            cout << d << endl;
        }
    }
}