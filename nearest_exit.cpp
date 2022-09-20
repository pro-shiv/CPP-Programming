#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n <= 50)
        {
            cout << "LEFT" << endl;
        }
        else if (n <= 100)
        {
            cout << "RIGHT" << endl;
        }
    }
}