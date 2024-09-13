class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
           int t = target - nums[i];
           if(mp.find(t) != mp.end()){
            return {mp[t],i};
           } 

           mp[nums[i]] = i;
            
            
        }
        return {}; 
    }
};
//[3,2,4]
/* 
3 0
2 1

*/
