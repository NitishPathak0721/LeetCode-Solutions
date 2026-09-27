/*class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int num=nums.size();
        int max_xor=0;
        for(int i=0;i<num;i++){
            for(int j=i+1;j<num;j++){
                int x=nums[i]^nums[j];
                if(x>max_xor) max_xor=x;
            }
        }
        return max_xor;
    }
};*/
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0;

        for (int bit = 30; bit >= 0; bit--) {

            int mask = ans | (1 << bit);

            unordered_set<int> st;

            for (int num : nums) {
                st.insert(num & mask);
            }

            for (int prefix : st) {
                if (st.count(prefix ^ mask)) {
                    ans = mask;
                    break;
                }
            }
        }

        return ans;
    }
};