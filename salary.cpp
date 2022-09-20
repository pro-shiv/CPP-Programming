#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, w, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> w >> x >> y >> z;
        w += (z * x) - (z * y);
        cout << w << endl;
    }
}