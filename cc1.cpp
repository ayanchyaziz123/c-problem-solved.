#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    int n, sum, sef, deth;

    cin>>n;

    for(int i=0; i<n; i++){
        sef = 0;
        deth = 0;
        cin>>a>>b;

        while(1){
            if( a <= 0){
                deth = 1;
                break;
           }
           if(b <= 0){
               sef = 1;
               break;
           }
            a = a - b;
            b = b / 2;

        }

        if(sef == 1){
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        

        
        
    }





    return 0;
}