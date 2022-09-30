#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, totaldays, place;
        cin >> n >> k;
        if (n % 5 != 0)
        {
            totaldays = n / 5;
            totaldays += 1;
            place = k / 5;
            if (k % 5 == 0)
            {
                cout << totaldays - place << endl;
            }
            else
            {
                place += 1;
                cout << totaldays - place << endl;
            }
        }
        else if (n % 5 == 0)
        {
            totaldays = n / 5;
            place = k / 5;
            if (k % 5 == 0)
            {
                cout << totaldays - place << endl;
            }
            else
            {
                place += 1;
                cout << totaldays - place << endl;
            }
        }
    }
}