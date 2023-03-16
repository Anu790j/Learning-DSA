#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether the
// frequency of elements in array
// is unique or not.
bool checkUniqueFrequency(int arr[],
                          int n)
{
 
    // Freq map will store the frequency
    // of each element of the array
    unordered_map<int, int> freq;
 
    // Store the frequency of each
    // element from the array
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
 
    unordered_set<int> uniqueFreq;
 
    // Check whether frequency of any
    // two or more elements are same
    // or not. If yes, return false
    for (auto& i : freq) {
        if (uniqueFreq.count(i.second))
            return false;
        else
            uniqueFreq.insert(i.second);
    }
 
    // Return true if each
    // frequency is unique
    return true;
}
 
// Driver Code
int main()
{
    // Given array arr[]
    int arr[] = { 1, 1, 2, 5, 5 };
    int n = sizeof arr / sizeof arr[0];
 
    // Function Call
    bool res = checkUniqueFrequency(arr, n);
 
    // Print the result
    if (res)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}