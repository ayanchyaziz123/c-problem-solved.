#include <bits/stdc++.h>
using namespace std;

void show(deque<int> dq)
{
    deque<int>:: iterator it;
    for(it = dq.begin(); it!=dq.end(); it++){
        cout<<*it<<endl;
    }
}

int main()
{

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(40);
    show(dq);

    return 0;
}