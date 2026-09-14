class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum=0;
        int num=height.size();
        int left=0;
        int right=num-1;
        while(left<right){
            int heights=min(height[left],height[right]);
            int width=(right-left);
            int result=heights*width;
            maximum=max(maximum,result);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            
        }
     return maximum;
    }
};