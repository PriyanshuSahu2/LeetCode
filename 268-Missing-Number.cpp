class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalValue = nums.size() * (1 + nums.size())/2;

       cout<<totalValue;
        int n=0;
        for(int i =0;i<nums.size();i++){
            n+=nums[i];
        }

        return totalValue - n;
    

    }
};