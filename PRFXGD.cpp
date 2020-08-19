#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int k, x;
        cin >> k >> x;
        int count = 0;
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < str.size(); i++)
        {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] > x)
            {
                if (k > 0)
                {
                    freq[str[i] - 'a']--;
                    k--;
                }
                else
                {
                    break;
                }
            }

            else
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}