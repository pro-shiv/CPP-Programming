#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2, A, B, C;
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> c1 >> c2;
        A = a1 + a2;
        B = b1 + b2;
        C = c1 + c2;
        if (A >= B && A >= C)
        {
            cout << A << endl;
        }
        else if (B >= A && B >= C)
        {
            cout << B << endl;
        }
        else
        {
            cout << C << endl;
        }
    }
}