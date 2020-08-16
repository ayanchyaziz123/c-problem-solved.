#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s, n, k;
    int ele, c, pos;

    cin >> s;

    for (int j = 0; j < s; j++)
    {
        int min = 2147483647;
        int flag = 0;
        cin >> n >> k;
        vector<int> p;
        for (int k = 0; k < n; k++)
        {
            cin >> ele;
            p.push_back(ele);
        }

        for (int i = 0; i < p.size(); i++)
        {

            if ( p[i] < k && k % p[i] == 0)
            {
                flag = 1;
                c = k / p[i];
                if (c < min)
                {
                    min = c;
                    pos = i;
                }
            }
        }
        if (flag == 1)
        {
            cout << p[pos] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}