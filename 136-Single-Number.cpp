class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans =0; // 4 ^ 1

        for(int i:nums){
            ans ^= i;
        }
        return ans;
    }
};