#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> mat;
    vector<int> v;

    //blank row 0 created
    mat.push_back(v);

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    mat.push_back(v); //row 1 created

    v.clear();
    v.push_back(2);
    mat.push_back(v); //row 2 created
    mat[2].push_back(2);

    // mat[3].push_back(3);//does not work as row 3 is not created beforehand

    mat.push_back(vector<int>());//create an empty row


    for (auto i : mat)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

    cout << "mat[2]: ";
    for (auto j : mat[2])
        cout << j << " ";
    return 0;
}