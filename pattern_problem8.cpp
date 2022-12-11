#include <bits\stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 4 - i && j <= 2 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            if (j >= 7 - i && j <= i - 1)
            {

                cout << "*";
            }
            else if (j == 1 || j == 5)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}