#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n, m;
    cout << "Enter the number to check armstrong number :";
    cin >> n;
    m = n;
    int len = 3;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, len);
        n = n / 10;
    }
    cout << sum;
}