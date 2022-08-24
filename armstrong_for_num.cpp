#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, si = 0, originalNum;
    cout << "/enter the number to check :";
    cin >> n;
    originalNum = n;
    int len = to_string(n).size();

    while (n > 0)
    {

        int rem = n % 10;
        si += pow(rem, len);

        n = n / 10;
    }
    if (si == originalNum)
    {
        cout << "It is a armstrong number";
    }
    else
    {
        cout << "not a armstrong number";
    }
}