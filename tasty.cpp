#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y;
        a = 2 * x;
        b = 5 * y;
        if (a > b)
        {
            cout << "Chocolate" << endl;
        }
        else if (a == b)
        {
            cout << "Either" << endl;
        }
        else
        {
            cout << "Candy" << endl;
        }
    }
}