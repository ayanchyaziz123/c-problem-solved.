#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T, n, k;

    int ele, c, pos;
    cin>>T;
    while (T != 0)
    {
        int min = -1;
        int flag = 0;
        cin >> n >> k;
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            p.push_back(ele);
            if (k > p[i] && k % p[i] == 0)
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