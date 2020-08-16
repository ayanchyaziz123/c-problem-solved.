#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int val1, val2, val3, val4, m1, m2, m3, finals,val5;

    val1 = a + b * c;
    val2 = a * (b + c);
    val3 = a * b * c;
    val4 = (a + b) * c;
    val5 = a + b + c;

    m1 = max(val1, val2);
    m2 = max(m1, val2);
    m3 = max(m2, val3);
    finals = max(m3, val4);
    cout<<max(finals, val5);
    

        return 0;
}