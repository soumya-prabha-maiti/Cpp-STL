#include<iostream>
#include<array>
using namespace std;

int main()
{
    // basic array
    int basic[4]={1,2,3,4};

    // STL array
    array<int,4> arr={1,2,3,4};

    cout<<arr.size()<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Front and back element
    cout<<"Element at the front : "<<arr.front()<<endl;
    cout<<"Element at the back : "<<arr.back()<<endl;

    // Empty or not
    cout<<"Is Empty? "<<arr.empty();

    return 0;
}