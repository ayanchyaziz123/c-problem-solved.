#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int counts, l;
    int ans; 
    string x;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        ans = 0;
        counts = 0;
        l = x.size();

        for(int j=0; j<l; j++){

            if(counts == 3){
                break;
            }

            else if(x[j] == '1'){

                ans ++;

            }
            
            else if(x[j] == '0'){
                counts ++;
            }
        }
        cout<<ans<<endl;
        
    }


    return 0;
}