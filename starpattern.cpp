#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int space = n / 2;
    int star = 1;

    for (; star <= n; star += 2, space--)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int i = 0; i < star; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < (n / 2) + 1; i++)
    {
        cout << "@";
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }
        cout << "@";
        cout << "\n";
    }

    int left = n - ((n / 2) + 1);

    space = (n / 2) - 1;
    star = 1;

    for (; star <= n; star += 2, space--)
    {

        if (star != n)
        {

            cout << "@";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int i = 0; i < star; i++)
        {
            cout << "*";
        }

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        if (star != n)
        {

            cout << "@";
        }
        cout << "\n";
    }
}