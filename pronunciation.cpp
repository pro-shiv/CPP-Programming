#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.length() < 4)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int conso = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e')
                {
                    conso = 0;
                }
                else
                {
                    conso++;
                }
                if (conso >= 4)
                {
                    break;
                }
            }
            if (conso >= 4)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}