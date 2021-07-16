// Map(ordered) - contains (key,value) pairs
// All keys are unique
// 1 key can point to exactly 1 value
// Multiple keys can point to same value

// Complexity:
// insert,count(which actually searches),erase,find = O(logn)
// Since map(ordered map) -> implemented using red black tree or balanced tree

// Unordered map -> implemented using hash table
// So search = O(1)

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    // Inserting new elements
    m[1] = "Soumya";
    m[2] = "Sam";
    m[5] = "Rony";
    m[5] = "Rany"; //overwrites the prevoius entry at key 5
    m.insert({5, "Raju"}); //does not overwrite the prevoius entry at key 5
    m.insert({6, "Raju"});

    //If a key does not exist in a <int,int> map, then the value to that key is 0 by default
    map<int,int> newm;
    newm[1]++;//newm[1]=1


    // print
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
        //      key                 value
    }

    // searching if a key is present
    cout<<"Finding 6 : "<<m.count(6)<<endl;//1(True)
    cout<<"Finding -6 : "<<m.count(-6)<<endl;//0(False)

    // Erasing an element
    m.erase(5);
    m.erase(10);//Does not give error if key is not present
    cout<<"\nAfter erase\n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Find -> Returns iterator to element with given key
    auto it=m.find(2);
    cout<<"\nPrinting from key=2 using iterator\n";
    for (auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    

    return 0;
}