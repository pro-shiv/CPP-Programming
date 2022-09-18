#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > 0; j--)
        {
            if (i < j)
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