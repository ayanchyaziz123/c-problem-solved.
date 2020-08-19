#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int m = a+b;
        int a1 = a/10;
        int a2 = a%10;
        int b1= b/10;
        int b2 = b%10;
        if(a1 == 0 && b1!= 0){
            m = max(m, a2*10+b2+b1);
        }
        else if(b1==0 && a1!=0){
            m = max(m, b2*10+a2+a1);
        }
        else if(a1!=0 && b1!=0){
            m = max(m, b2*10+a2 + b1*10+a1);
            m = max(m, a2*10+b1 +a1*10+b2);
        }
        cout<<m<<endl;
    }

    return 0;
}