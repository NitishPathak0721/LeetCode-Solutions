class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int num=nums.size();
        if(num==0){
            return {};
        }
        int max;
        vector<int>unique(num,-1);
        for(int i=0;i<num;i++){
            for(int j=1;j<num;j++){
                int idx=(i+j)%num;
                if(nums[idx]>nums[i]){
                    unique[i]=nums[idx];
                    break;
                }
            }
        }
        return unique;
    }
};