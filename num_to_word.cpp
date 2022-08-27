#include <iostream>

using namespace std;

int main()
{
    int n, rem, nrem, m;
    cout << "enter the number : ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        cout << rem;
    }
}