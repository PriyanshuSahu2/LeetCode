class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> n1;
        vector<int> n2;

        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                n1.push_back(nums[i]);
            }else{
                n2.push_back(nums[i]);
            }
        }

int j =0;
int k=0;
        for(int i =0;i<nums.size();i++){
            if((i+1)%2 ==0){
                nums[i] = n1[j];
                j++;
            }else{
                nums[i] = n2[k];
                k++;
            }
        }
return nums;

    }
};