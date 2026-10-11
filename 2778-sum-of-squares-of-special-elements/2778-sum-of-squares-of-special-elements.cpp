class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        int digit;
        for(int i=1;i<=len;i++){
            if(len%(i)==0){
                if(sum>INT_MAX/10 || sum<INT_MIN/10){
                    return 0;
                }
                sum+=nums[i-1]*nums[i-1];
            }
        }
        return sum;
    }
};