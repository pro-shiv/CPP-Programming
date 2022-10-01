#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        int sum = 0, newSum = 0;
        cin >> n >> k;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            sum = p[i] + sum;
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i] > k)
            {
                newSum = newSum + k;
            }
            else
            {
                newSum = p[i] + newSum;
            }
        }
        if (sum > newSum)
        {
            sum = sum - newSum;
            cout << sum << endl;
        }
        else
        {
            cout << sum - newSum << endl;
        }
    }
}