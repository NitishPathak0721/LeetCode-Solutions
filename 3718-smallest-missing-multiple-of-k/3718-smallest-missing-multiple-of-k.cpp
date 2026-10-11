class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int element=k;
        for(int num:nums){
            if(num==element){
                element+=k;
            }else if(element<num){
                break;
            }
        }
        return element;
    }
};