#include<bits/stdc++.h>
using namespace std;


void show(priority_queue<int>pq){

    while (!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
        
    }
    
}

int main(){

    priority_queue<int>pq;
    pq.push(10);
    pq.push(40);
    pq.push(30);
    cout<<pq.size()<<endl;
    show(pq);

}