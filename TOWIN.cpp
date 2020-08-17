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
        int first = 0;
        int second = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                first++;
            }

            else if ((i == 1) || (i == 2))
            {
                second++;
            }
            else
            {
                if (i % 2 == 0)
                {
                    second++;
                }
                else
                {
                    first++;
                }
            }
        }

        if (first == second)
        {
            cout << "draw" << endl;
        }
        else if (first < second)
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "first" << endl;
        }
    }

    return 0;
}
