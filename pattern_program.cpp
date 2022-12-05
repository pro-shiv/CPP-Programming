#include <bits\stdc++.h>

using namespace std;

int main()
{
    int k;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                cout << k;
                j < 4 ? k++ : k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}