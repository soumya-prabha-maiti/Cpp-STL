// List STL is implemented as doubly linked list
// Direct access(as in array) is not possible
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Declaration
    list<int> l;
    list<int> a(5, 1); // 5 element size list with all elements equal to 1
    for (int i : a)
        cout << i << " ";
    cout << endl;

    // Inserting new element at the end of the list
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    // Displying the list
    for (int i : l)
        cout << i << " ";
    cout << endl;

    // pop_back and pop_front
    l.pop_back();
    l.pop_front();
    for (int i : l)
        cout << i << " ";
    cout << endl;

    // erase
    l.erase(l.begin());

    for (int i : l)
        cout << i << " ";
    cout << endl;

    // Copy
    list<int> b(a);
    for (int i : b)
        cout << i << " ";
    cout << endl;

    return 0;
}