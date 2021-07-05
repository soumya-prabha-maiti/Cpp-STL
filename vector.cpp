#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Declaration
    vector<int> v;
    vector<int> a(5,1);// 5 element size vector with all elements equal to 1

    cout<<"Capacity="<<v.capacity()<<endl;

    // Inserting new element at back of the vector
    v.push_back(1);

    // capacity() = allocated space
    // size() = no of elements
    // When the no of elements exceeds the capacity, the vector is copied into another vector of double capacity and the previous one is deleted
    cout<<"Capacity="<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity="<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity="<<v.capacity()<<endl;
    cout<<"Size="<<v.size()<<endl;


    // Random access an element
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"The element at index 2 is "<<v.at(2)<<endl;
    
    // Deleting element at back of the vector
    v.pop_back();

    // Front and back element
    cout<<"Element at the front : "<<v.front()<<endl;
    cout<<"Element at the back : "<<v.back()<<endl;

    // Clear the vector
    // NB- when vector is cleared, size becomes 0 but not capacity.
    v.clear();
    cout<<"Capacity="<<v.capacity()<<endl;
    cout<<"Size="<<v.size()<<endl;

    // Copying a vector
    vector<int> newv(v);

    return 0;
}