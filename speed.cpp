#include <bits/stdc++.h>

using namespace std;

int main()
{
    float t, a, x, b, y;
    float s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> b >> y;
        s1 = a / x;
        s2 = b / y;
        cout << s1 << endl
             << s2 << endl;

        if (s1 > s2)
        {
            cout << "alice" << endl;
        }
        else if (s1 == s2)
        {
            cout << "equal" << endl;
        }
        else
        {
            cout << "bob" << endl;
        }
    }
}