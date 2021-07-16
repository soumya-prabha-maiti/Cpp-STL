#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);

    // Searching
    cout << "\nBinary search- Is present? " << binary_search(v.begin(), v.end(), 2); //returns true(1) or false(0)
    cout << "\nLower bound " << lower_bound(v.begin(), v.end(), 2) - v.begin();      //gives iterator to lowest index
    cout << "\nUpper bound " << upper_bound(v.begin(), v.end(), 2) - v.begin();      //gives iterator to highest index//??????????????????????????????????????????????//wrong answer

    // Max min
    cout << "\nmax is " << max(1, 2) << "\nmin is " << min(1, 2);

    // swap--> applicable for all containers
    string s1 = "string1", s2 = "string2";
    swap(s1, s2);
    cout << "\nString s1 is " << s1;

    // Reverse
    reverse(s1.begin(), s1.end());
    cout << "\nReversed :" << s1;

    // Rotate
    cout << "\nBefore rotate : ";//12245
    for (int i : v)
        cout << i << " ";
    rotate(v.begin(), v.begin() + 2, v.end());//Rotate left by 2 unit
    cout << "\nAfter rotate : ";//24512
    for (int i : v)
        cout << i << " ";

    // Sort--> Intro sort = Quick+Heap+Insertion sort
    cout << "\n\nBefore sort : ";//24512
    for (int i : v)
        cout << i << " ";
    sort(v.begin(),v.end());
    cout << "\nAfter sort : ";//12245
    for (int i : v)
        cout << i << " ";


    return 0;
}