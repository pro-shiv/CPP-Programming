#include <bits\stdc++.h>

using namespace std;

int main()
{
    int k = 1;
    for (int i = 1; i <= 9; i++)
    {
        if (i >= 2 && i <= 8)
        {
            i > 5 ? k-- : k++;
        }
        for (int j = 1; j <= 9; j++)
        {

            if (i == 1 || i == 9)
            {
                cout << "*";
            }
            else
            {

                if (j >= 7 - k && j <= 3 + k)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}