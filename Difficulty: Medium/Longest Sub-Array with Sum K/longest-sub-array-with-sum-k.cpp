//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        map<int,int> mp;
        
        int maxCount =0;
        int sum =0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            
            if(sum == K){
                maxCount = max(maxCount,i+1);
            }

            int rem = sum-K;
            
            if(mp.find(rem) != mp.end()){
                int len = i- mp[rem];
                maxCount = max(maxCount,len);
            }
           if(mp.find(sum)== mp.end()){
               mp[sum] = i;
           }
        }
        return maxCount;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends