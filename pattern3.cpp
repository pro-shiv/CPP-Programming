#include <iostream>

using namespace std;

int main()
{
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (i <= j)
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
}