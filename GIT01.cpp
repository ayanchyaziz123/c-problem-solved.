#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            string cake;
            cin >> cake;

            for (int j = 0; j < k - 1; j++){
                if(cake[j] == cake[j+1]){
                    if(cake[j-1] == 'R' && cake[j+1] == 'R'){

                   } 

                }

            }
            
           

        }
        cout<<cost<<endl;
         
    }

    return 0;
}