#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    int i, j;
    // Input elements into the array
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted : ";
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}