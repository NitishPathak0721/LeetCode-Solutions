class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int height=heights.size();
        int count=0;
        vector<int>num(height);
        for(int i=0;i<height;i++){
            num[i]=heights[i];
        }
        sort(num.begin(),num.end());
        for(int i=0;i<height;i++){
            if(heights[i]!=num[i]) count++;
        }
        return count;
    }
};