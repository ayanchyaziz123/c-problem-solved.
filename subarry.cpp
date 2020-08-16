#include <bits/stdc++.h>
using namespace std;

void subArrayPrint(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k < i; k++)
            {

                cout << arr[k] <<" ";
            }
            cout << endl;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    subArrayPrint(arr, 4);

    return 0;
}