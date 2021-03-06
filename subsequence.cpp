#include <bits/stdc++.h>
using namespace std;

vector<int> final_arr;

/*void printArray(vector<int> arr, int n)
{

    if (arr.size() <= 1)
    {
        final_arr.push_back(arr[0]);
    }
    else
    {
        final_arr.push_back(*min_element(arr.begin(), arr.end()));
    }
}
*/

void printArray(vector<int> arr, int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  

// Recursive function to print all 
// possible subsequences for given array 
void printSubsequences(vector<int> arr, int index,  
                       vector<int> subarr) 
{ 
    // Print the subsequence when reach 
    // the leaf of recursion tree 
    if (index == arr.size()) 
    { 
        int l = subarr.size(); 
  
        // Condition to avoid printing 
        // empty subsequence 
        if (l != 0) 
            printArray(subarr, l); 
    } 
    else
    { 
        // Subsequence without including 
        // the element at current index 
        printSubsequences(arr, index + 1, subarr); 
  
        subarr.push_back(arr[index]); 
  
        // Subsequence including the element 
        // at current index 
        printSubsequences(arr, index + 1, subarr); 
    } 
    return; 
} 


int main()
{

    vector<int> b;
    int l, cle, t;
    cin >> t;

    while (t--)
    {
        cin >> l;
        vector<int> arr;

        for (int i = 0; i < l; i++)
        {
            cin >> cle;
            arr.push_back(cle);
        }

        printSubsequences(arr, 0, b);
        /*
        for (int j = 0; j < final_arr.size(); j++)
        {
            cout << final_arr[j] << endl;
        }
        */
    }

    return 0;
}
