#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int cle;

        for (int i = 0; i < n; i++)
        {
            cin >> cle;
            arr.push_back(cle);
        }
        int p1 = 0;
        int p2 = 0;

        p1 += arr[0];
        p2 += arr[1] + arr[2];

        for (int i = 3; i < arr.size(); i++)
        {
            if (i % 2 != 0)
            {
                p1 += arr[i];
            }
            else
            {
                p2 += arr[i];
            }
        }

        if (p1 > p2)
        {
            cout << "first" << endl;
        }
        else if (p1 < p2)
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "draw" << endl;
        }
    }

    return 0;
}
