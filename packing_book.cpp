#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int t,x,y,z;
    cin >> t;
    while (t--)
    {
        float a;
        cin >> x >> y >> z;
        a = ceil(y/z);
        cout << a ;
    }
}