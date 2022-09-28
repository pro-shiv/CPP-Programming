#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, total;
        cin >> n >> a >> b;
        total = 2 * (180 + n) - (a + b);

        cout << total << endl;
    }
}