#include <bits/stdc++.h>

using namespace std;

void getElement(int arr[], int n)
{
    if (n == 0 || n == 1)
    {

        cout << -1 << " " << -1;
    }

    else
    {
        int small = INT_MAX, second_small = INT_MAX;
        int large = INT_MIN, second_large = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            small = min(small, arr[i]);
            large = max(large, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < second_small && arr[i] != small)
            {
                second_small = arr[i];
            }
            if (arr[i] > second_large && arr[i] != large)
            {
                second_large = arr[i];
            }
        }
        cout << "Second largest element is :" << second_large << endl;
        cout << "Second small element is :" << second_small << endl;
    }
}
int main(void)
{
    int n;
    int arr[] = {1, 2, 10, 0, 3};
    n = sizeof(arr) / sizeof(arr[0]);
    getElement(arr, n);
}
