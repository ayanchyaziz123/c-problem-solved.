#include<bits/stdc++.h>
using namespace std;


void show(queue<int>qu){
    while (!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    
}



int main(){

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    show(q);



    return 0;
}