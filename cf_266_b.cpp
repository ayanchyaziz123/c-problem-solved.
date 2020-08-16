#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, l;
    cin >> a >> b;
    string x;
    char temp;
    cin >> x;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (x[j] == 'B' && x[j + 1] == 'G')
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
                j++;
            }         
        }
    }

    cout << x;

    return 0;
}