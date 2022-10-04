#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum;
        cin >> a >> b;
        sum = a + b;
        string str = to_string(sum);
        int newsum = 0;

        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] == '0' || str[i] == '6' || str[i] == '9')
            {

                newsum = newsum + 6;
            }
            if (str[i] == '1')
            {
                newsum = newsum + 2;
            }
            if (str[i] == '2' || str[i] == '3' || str[i] == '5')
            {
                newsum = newsum + 5;
            }
            if (str[i] == '4')
            {
                newsum = newsum + 4;
            }
            if (str[i] == '7')
            {
                newsum = newsum + 3;
            }
            if (str[i] == '8')
            {
                newsum = newsum + 7;
            }
        }
        cout << newsum << endl;
    }
}