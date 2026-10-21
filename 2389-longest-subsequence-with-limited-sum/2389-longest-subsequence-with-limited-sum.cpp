class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
           sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        vector<int> result;
        // Process each query using a manual binary search
        for (int target : queries) {
            int low = 0;
            int high = nums.size() - 1;
            int ans = 0;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                // If the sum up to 'mid' is within the target limit
                if (nums[mid] <= target) {
                    ans = mid + 1; // We can take at least mid + 1 elements
                    low = mid + 1; // Try to look for a larger count on the right
                } else {
                    high = mid - 1; // Sum is too large, look on the left
                }
            }
            result.push_back(ans);
        }
        return result;
    }
};