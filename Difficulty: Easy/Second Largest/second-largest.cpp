//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
    int maxNumber = arr[0];
    int maxNumber1 = -1;
    for(int i =0;i<arr.size();i++){
        maxNumber = max(arr[i],maxNumber);
    }
    for(int i =0;i<arr.size();i++){
        if(arr[i]<maxNumber && arr[i]>maxNumber1){
            maxNumber1 = max(arr[i],maxNumber1);
        }
    }
    return maxNumber1;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends