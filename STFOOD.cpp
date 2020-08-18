#include <bits/stdc++.h>
using namespace std;
#define size 1000

int main()
{

    int n;
    int s, v, p;
    int max;
    int num;
    int t;
    cin>>t;
    while (t--)
    {
        max = 0;
        num = 0;
         cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> p >> v;
        num = p / (s + 1) * v;
        if (max < num)
        {
            max = num;
        }
        
    }
    cout << max << endl;

    }
    
   
    return 0;
}