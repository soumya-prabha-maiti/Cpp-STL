// Set(ordered set) - Contains unique elements, same element cannot remain morethan once
// Implemented using BST
// Elements are retrieved from set in sorted order
// Elements cannot be modified once they are in set
// Elements can be only inserted or deleted from set
//
// Complexities:
// inset find erase count- O(logn)
// empty begin end size - O(1)

//Unordered set is faster than set
// Elements are retrieved from unordered set in random order

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    // Insert
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // Print
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    // Erase
    set<int>::iterator iter = s.begin();
    iter++;
    s.erase(iter); //erases 2
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    // Erasing a prticular element
    int ele=1;
    s.erase(s.find(ele));//odesnt work if ele is not present

    for (auto i : s)
        cout << i << " ";

    // count() - returns true or false if an element is present
    cout << s.count(5) << endl; //returns 1
    cout << s.count(6) << endl; //returns 0

    // find() - returns iterator to an element is present
    set<int>::iterator it = s.find(5);
    cout << "Value at iterator: " << (*it);

    // Empty
    cout << "\nEmpty?" << s.empty();

    return 0;
}