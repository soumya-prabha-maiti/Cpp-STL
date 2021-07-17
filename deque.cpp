#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // Inserting new element
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);
    d.push_front(0);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // Deleting an element
    d.pop_back();
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // Random access
    cout << "The element at index 1 is " << d.at(1) << endl;
    cout << "The element at index 1 is " << d[1] << endl;

    // Front and back element
    cout << "Element at the front : " << d.front() << endl;
    cout << "Element at the back : " << d.back() << endl;

    // Iterator??????????????????????????????????????????????????
    d.begin();
    d.end();


    // Empty or not
    cout << "Is empty?" << d.empty()<<endl;

    // Erase function??????????????????????????????????????????????????
    // Size(no of elements) becomes 0 after erase
    // But MAXSIZE(allocated memory ) does not become 0
    d.erase(d.begin(),d.begin()+1);
    for (int i : d)
    {
        cout << i << " ";
    }


    return 0;
}