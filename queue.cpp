#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Declaration
    queue<int> q;

    // Push
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Size
    cout<<"size "<<q.size()<<endl;

    // Front element
    cout<<"front Element-> "<<q.front()<<endl;

    // Pop
    q.pop();
    cout<<"front Element-> "<<q.front()<<endl;

    // Empty
    cout<<"Empty?"<<q.empty();
    

    // Copying a queue
    queue<int> newq(q);
    cout<<"\nfront Element-> "<<newq.front()<<endl;


    return 0;
}