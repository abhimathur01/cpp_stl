#include "bits/stdc++.h"
using namespace std;
int main()
{
    /*This function can be used to sort an array or a vector or a string.
    The underlying sorting algorithm is called the gcc_sort which is a hybrid algorithm
    which is implemented in a very efficient way. O(NlogN) */
    // gcc_sort is combination of quick sort, heap sort, and insertion sort ...

    int arr[5] = {8, 9, 5, 7, 6};
    sort(arr, arr + 6); // sort(address of first element,address right to the last element)
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl
         << "*****" << endl
         << endl;

    vector<int> v = {10, 5, 15, 25, 20};
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
