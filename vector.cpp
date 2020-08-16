#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a;

    for(int i=0; i<5; i++){
        a.push_back(i);
    }

    for(int j=0; j<a.size(); j++){
        cout<<a[j]<<" ";
    }
    cout<<a.max_size();



    return 0;
}