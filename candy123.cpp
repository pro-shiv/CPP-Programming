#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, bob = 0, limak = 0, i = 1;
        cin >> a >> b;

        while (limak <= a && bob <= b)
        {
            if (i % 2 == 0)
            {
                bob += i;
            }
            else
            {
                limak += i;
            }
            i++;
        }
        if (limak > a)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Limak" << endl;
        }
    }
}