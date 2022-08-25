#include <iostream>
using namespace std;

int main()
{
    int n, m, rem, rev = 0;
    cout << "Enter the number :";
    cin >> n;
    m = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == m)
    {
        cout << "palindrome ";
    }
    else
    {
        cout << "not a palindrome";
    }
}