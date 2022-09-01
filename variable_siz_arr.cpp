#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, i = 0;
    cin >> x >> y;

    int *arr[x];
    while (x--)
    {
        int n;
        cin >> n;
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        i++;
    }
    while (y--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}