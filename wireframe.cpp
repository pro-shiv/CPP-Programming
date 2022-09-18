#include <iostream>
using namespace std;

int main()
{
    int n, m, x, t, p;
    // no.of test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> x;
        p = (2 * n) + (2 * m);
        p *= x;
        cout << p << endl;
    }
}