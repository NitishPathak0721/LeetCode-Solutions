class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       int maximum=*max_element(nums.begin(),nums.end());
       int minimum=*min_element(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=maximum && nums[i]!=minimum){
            return nums[i];
        }
       } 
       return -1;
    }
};