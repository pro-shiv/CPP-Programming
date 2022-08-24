#include <bits/stdc++.h>

using namespace std;

int power(int a, int b)
{
    if (b == 1)
        return a;
    return a * power(a, b - 1);
}

int main()
{

    int n;
    cin >> n;
    int ori = n;
    int sum = 0;
    int len = to_string(n).size();
    cout << power(2, 3);

    while (n > 0)
    {
        int rem = n % 10;
        sum += power(rem, len);
        n = n / 10;
    }
    if (sum == ori)
        cout << "Yes";
    else
        cout << "NO";
}
