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
            sum+=arr[i]; //34
            
            if(sum == K){//34 == 15
                maxCount = max(maxCount,i+1);//2
            }

            int rem = sum-K;//34-15 = 19
            
            if(mp.find(rem) != mp.end()){ //if Find Return True 
                int len = i- mp[rem];// 4 - 0
                maxCount = max(maxCount,len); //4,2 = 4
            }
           if(mp.find(sum) == mp.end()){ //if Does Not find Return True
               mp[sum] = i;//9 3
           }
        }
        return maxCount;
    } 

};
/*
K  V
10 0
15 1
17 2
9  3


*/

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