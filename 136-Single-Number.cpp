class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }
        for(auto item:mp){
            if(item.second==1){
                return item.first;
            }
        }
        return -1;
    }
};