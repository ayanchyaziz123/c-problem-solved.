#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        int ple;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> ple;
            v.push_back(ple);
        }
        int counts = 0;

        for (int i = 0; i < v.size() - 1; i++)
        {
            counts +=  abs((v[i] - v[i+1])) -1;
        }
        cout<<counts<<endl;
    }

    return 0;
}