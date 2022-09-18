#include <iostream>

using namespace std;
int main()
{

    int A[10], n = 10, key;
    cout << "Enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the key you search :";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "successful key found at :" << i;
            return 0;
        }
    }
    cout << "key not found";
    return 0;
}