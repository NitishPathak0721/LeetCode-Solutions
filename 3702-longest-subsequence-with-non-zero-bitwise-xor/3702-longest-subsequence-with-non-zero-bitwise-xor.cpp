class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total_Xor=0;
        bool hasTrue=false;
        for(int num:nums){
            total_Xor^=num;
            if(num!=0){
                hasTrue=true;
            }
        }
        if(total_Xor!=0){
            return nums.size();
        }
        return  hasTrue ? nums.size() - 1 : 0;
    }
};