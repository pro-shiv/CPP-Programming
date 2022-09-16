#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    // number of tasks
    cin >> t;
    int r1[t], r2[t], r3[t], r4[t];
    for (int i = 0; i < t; i++)
    {
        cin >> r1[i] >> r2[i] >> r3[i] >> r4[i];
    }
    // for (int i = 1; i <= t; i++)
    // {
    //     cout << r1[i] << " " << r2[i] << " " << r3[i] << " " << r4[i] << endl;
    // }
    for (int i = 0; i < t; i++)
    {
        if (r1[i] == 0 && r2[i] == 0 && r3[i] == 0 && r4[i] == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
}