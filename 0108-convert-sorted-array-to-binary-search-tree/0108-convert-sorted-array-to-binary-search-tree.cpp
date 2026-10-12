/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* helper(vector<int>&nums,int left,int right){
        if(left>right){
            return NULL;
        }
         // Prevents potential integer overflow compared to (left + right) / 2
        int mid = left + (right - left) / 2;
        
        // Create the root node with the middle value
        TreeNode* root = new TreeNode(nums[mid]);
        
        // Recursively build the left and right subtrees
        root->left = helper(nums, left, mid - 1);
        root->right = helper(nums, mid + 1, right);
        
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return helper(nums, 0, nums.size() - 1);
    }
};