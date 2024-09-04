class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> n1;
        for(int i: nums){
            n1.insert(i);
        }
        nums = vector<int> (n1.begin(),n1.end());

        return nums.size();
        

    }
};