#include "bits/stdc++.h"
using namespace std;
int main()
{
    /*
       Vector

       It is a dynamic sized array. Number of elements can be increased or decreased. (In Java same behaviour is shown by ArrayList).
       vector<int> v; // empty vector of integers
       vector<int> v(10); // vector of integers with 10 elements (all 0)
       vector<char> v(10,'h'); // vector of chars with 10 elements (all 'h')
       [] operator - can be used to access elements like an array. O(1)
       cout << v[0]; // prints the first element in the vector
     */

    vector<int> v; // v.push_back(x) - insert the value x to the end of the vector. O(1)

    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << v[0] << " "
         << v[1] << " "
         << v[2] << " "
         << v[3] << " "
         << endl;

    cout << "v.size: " << v.size() << endl;
    // v.size() - returns the current size of the vector. O(1)

    v.pop_back();
    // v.pop_back() - erase the last element. O(1)

    v.push_back(100);
    cout << v[0] << " "
         << v[1] << " "
         << v[2] << " "
         << v[3] << " "
         << endl;

    v.clear(); // v.clear() - erase all elements. O(n)
    cout << "v.size: " << v.size() << endl;

    return 0;
}
