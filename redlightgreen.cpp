#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > k)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}