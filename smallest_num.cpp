#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the length of number :";

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = arr[0];
    for (int j = 1; j < n; j++)
    {
        if (s > arr[j])
        {
            s = arr[j];
        }
    }
    cout << s;
}
