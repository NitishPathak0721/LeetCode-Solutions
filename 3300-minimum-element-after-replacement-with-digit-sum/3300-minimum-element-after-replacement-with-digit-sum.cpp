class Solution {
public:
    int minElement(vector<int>& nums) {
        int num=nums.size();
        vector<int>result;
        for(int i=0;i<num;i++){
            int num=nums[i];
            int sum=0;
            if(num<=9){
                result.push_back(num);
            }else{
                while(num!=0){
                    int digit=num%10;
                    sum+=digit;
                    num/=10;
                }
                result.push_back(sum);
            }
        }
        int p=*min_element(result.begin(),result.end());
        return p;
    }
};