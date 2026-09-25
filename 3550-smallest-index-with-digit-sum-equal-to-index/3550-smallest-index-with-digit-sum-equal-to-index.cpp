class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       int num=nums.size();
       for(int i=0;i<num;i++){
            int a=nums[i];
            int sum=0;
            while(a>0){
                int digit=a%10;
                sum+=digit;
                a=a/10;
            }
            if(sum==i){
                return i;
            }
       } 
       return -1;
    }
};