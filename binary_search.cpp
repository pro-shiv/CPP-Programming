#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l = 0, mid, key;

    cout << "enter the array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :";
    int h = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "enter the the number you want to search :";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "element found at " << mid;
            break;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
}