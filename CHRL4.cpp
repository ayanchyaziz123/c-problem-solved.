#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, K;
    cin >> N >> K;
    vector<int> arr;
    int cle;
    int get = 0;
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> cle;
        arr.push_back(cle);
    }
    arr.push_back(0);

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) >= 1 && (arr[i + 1] - arr[i]) <= K)
        {

            get = arr[i];
            if (ans < get * K)
            {
                ans = get * K;
            }
        }
    }
    cout << ans << endl;

    return 0;
}