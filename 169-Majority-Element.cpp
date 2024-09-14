class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int curr = nums[0];
        int lengthCurr = 0;

        for(int i =0;i<nums.size();i++){
            if(nums[i]==curr){
                lengthCurr++;
                if(lengthCurr >= nums.size()/2 + (nums.size()%2)){
                    return nums[i];
                }
            }else{
                curr = nums[i];
                lengthCurr = 1;
            }
        }
        return 0;
    }
};
