#include<iostream>
using namespace std;

int main()
{
    // Declaration
    pair<int,int> p;
    p.first=3;
    p.second=4;
    cout<<"The pair is "<<p.first<<","<<p.second<<endl;

    p={10,20};
    cout<<"The pair is "<<p.first<<","<<p.second<<endl;

    // using make_pair function
    p=make_pair(1,2);
    cout<<"The pair is "<<p.first<<","<<p.second<<endl;

    // p.swap()  ????????????????????
    // pair<int,int> q;
    // q.swap(p);
    // cout<<"The pair is "<<q.first<<","<<q.second<<endl;
    return 0;
}