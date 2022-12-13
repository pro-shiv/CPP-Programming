#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, largest;
    cout << "Enter the length of array :";
    cin >> n;
    cout << "Enter the array :";
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    largest = 0;
    for (int i = 1; i <= n; i++)
    {
        if (largest <= arr[i])
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}