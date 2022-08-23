#include <iostream>

using namespace std;

int main()
{
    int n, factor, sum = 0;
    cout << "enter the number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n * 2)
    {
        cout << "It is a perfect number ";
    }
    else
    {
        cout << "not a perfect number ";
    }
}