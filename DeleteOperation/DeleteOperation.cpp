#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int i, j, del = 3;

    // before delete run the array
    for (i = 0; i < n; i++)
    {
        cout << "Element: [" << i << "]:" << arr[i] << endl;
    }
       j = del - 1;//set the target value into array index
    // shift the elements to the left after deleting the element
       for (i = j; i < n - 1; i++)
       {
         arr[i] = arr[i + 1];
       }
    n--; // decrease the size of the array
    cout << "After deletion run the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Element: [" << i << "]:" << arr[i] << endl;
    }
}