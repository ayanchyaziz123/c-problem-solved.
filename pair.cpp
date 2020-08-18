#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*

    vector<pair<string, int>>v;

    cout<<"team"<<"           "<<"goal"<<endl;
    v.push_back(make_pair("Brazil", 20));
    v.push_back(make_pair("Argentina", 20));
    v.push_back(make_pair("Italy", 20));
    v.push_back(make_pair("Japan", 20));
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<"           " <<v[i].second<<endl;
    }
    */
    vector<pair<string, pair<int, int>>> v;

    v.push_back(make_pair("brazil", make_pair(10, 7)));
    v.push_back(make_pair("argentina", make_pair(8, 8)));
    v.push_back(make_pair("japan", make_pair(3, 2)));
    cout << "team name "
         << " "
         << "goal"
         << " "
         << "points" << endl;

   

    sort(v.begin(), v.end());

     for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }

    return 0;
}
