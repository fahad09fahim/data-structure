#include <iostream>
using namespace std;

int main()
{
    int n, item, loc;

    cout << "How many numbers do you want: ";
    cin >> n;
    int a[n];
    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number a[" << i << "] = ";
        cin >> a[i];
    }

    // Input the item to search
    cout << "Which item do you want to search: ";
    cin >> item;

    a[n + 1] = item;
    loc = 1;
    while (item != a[loc])
    {
        loc++;
    }
    if (loc == n + 1)
    {
        cout << "Item not found in the array." << endl;
    }
    else
    {
        cout << item << " found at location: " << loc << endl;
    }

    return 0;
}
