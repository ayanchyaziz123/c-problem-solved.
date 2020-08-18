#include<bits/stdc++.h>
using namespace std;



void show(stack<int>st){

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}
int main(){

    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(60);
    show(s);
    return 0;
}