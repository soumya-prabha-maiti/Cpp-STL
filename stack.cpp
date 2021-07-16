#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Declaration
    stack<int> stk;

    // Push
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    // Size
    cout<<"size "<<stk.size()<<endl;

    // Top element
    cout<<"Top Element-> "<<stk.top()<<endl;

    // Pop
    stk.pop();
    cout<<"Top Element-> "<<stk.top()<<endl;

    // Empty
    cout<<"Empty?"<<stk.empty();
    

    // Copying a stack
    stack<int> newstk(stk);
    cout<<"\nTop Element-> "<<newstk.top()<<endl;


    return 0;
}