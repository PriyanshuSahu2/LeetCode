class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int count = 0;
        for(int i: nums){
            if(i==1){
                curr++;
            }else{
                count = max(curr,count);
                curr =0;
            }

        }
        return max(curr,count);
    }
};