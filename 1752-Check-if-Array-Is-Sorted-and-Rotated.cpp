class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> n1;
        vector<int> n2;
        bool flag = false;
        if(nums.size()<=2){
            return true;
        }
        for(int i=1;i<nums.size();i++){
            if(flag){
                n1.push_back(nums[i]);
                continue;
            }
            n2.push_back(nums[i-1]);
            if(!(nums[i]>= nums[i-1])){
                flag = true;
                n1.push_back(nums[i]);
                   continue;
            }
            
        }


        n1.insert(n1.end(), n2.begin(), n2.end());
        flag = true;
        for(int i: n1){
            cout<<i<<endl;
        }
        for(int i=0;i<n1.size()-1;i++){
            if(n1[i]>n1[i+1]){
                flag = false;
                break;
            }
        }

        return flag;
    }
};