#include <iostream>

using namespace std;

int main()
{
    int n1, n2, rem, temp;
    cout << "enter two number :";
    cin >> n1 >> n2;
    if (n1 < n2)
    {
        temp = n1;
        n1 = n2;

        n2 = temp;
    }
    while (n2 > 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout << n1;
}