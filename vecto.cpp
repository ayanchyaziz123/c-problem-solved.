#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v; //define a vector

    v.push_back(10); // insert element in vector
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); // sorting in vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}