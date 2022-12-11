#include <bits\stdc++.h>

using namespace std;
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 5, y = 8, c;
    c = swap(x, y);
    cout << c;
}