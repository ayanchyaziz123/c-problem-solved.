#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string team1[12], team2[12];
        int goalTeam1[12], goalTeam2[12];
        string vs;
        set<string> st;
        for (int i = 0; i < 12; i++)
        {
            cin >> team1[i] >> goalTeam1[i] >> vs >> team2[i] >> goalTeam2[i];
            st.insert(team1[i]);
            st.insert(team2[i]);
        }

        vector<pair<string, pair<int, int>>> v;

        for (auto it = st.begin(); it != st.end(); i++)
        {
            v.push_back(make_pair(*it, make_pair(0, 0)));
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first<<" " <<v[i].second.first<<" "<<v[i].second.second;
        }
    }

    return 0;
}