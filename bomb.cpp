#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, index = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (x > a[i])
            {
                index = i;
            }
        }
        cout << index << endl;
    }
}