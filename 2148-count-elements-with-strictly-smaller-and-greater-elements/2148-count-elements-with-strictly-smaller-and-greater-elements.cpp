class Solution {
public:
    int countElements(vector<int>& nums) {
        int num=nums.size();
        int pos1,pos2,count=0;
        for(int i=0;i<num;i++){
            pos1=0,pos2=0;
            for(int j=0;j<num;j++){
                if(nums[j]<nums[i]) pos1=1;
                if(nums[j]>nums[i]) pos2=1;
            }
            if(pos1==1 && pos2==1) count++;
        }
        return count;
    }
};