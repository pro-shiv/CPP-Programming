#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > k)
            {
                cout << 0;
            }
            else
            {
                if (arr[i] <= k)
                {
                    k = k - arr[i];
                    cout << 1;
                }
            }
        }
        cout << endl;
    }
}