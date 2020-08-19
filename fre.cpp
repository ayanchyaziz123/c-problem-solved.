#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[27];
    string x = "ayan";

    memset(a, 0, sizeof(a));

    for (int i = 0; i < 26; i++)
    {
        a[x[i] - 'a']++;     
    }

    for(int i=0; i<26; i++){
        cout<<a[i]<<" ";
    }
    
    




    return 0;
}