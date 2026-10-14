class Solution {
public:
    int findGCD(vector<int>& nums) {
        int num=nums.size();
        int maximum=*max_element(nums.begin(),nums.end());
        int minimum=*min_element(nums.begin(),nums.end());
        int maxi=0;
        for(int i=1;i<=maximum;i++){
            if(maximum%i==0 && minimum%i==0){
                maxi=max(maxi,i);
            }
        }
        return maxi;
    }
};