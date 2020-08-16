#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> r;
        c = c%2;
        r = r%2;
        if (r <= c)
        {
            cout << 1 << " " << r << endl;
        }
        else
        {
            cout << 0 << " " << c << endl;
        }
    }
    return 0;
}