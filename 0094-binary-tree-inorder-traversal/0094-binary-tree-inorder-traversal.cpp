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
       void hector(TreeNode* root, vector<int>& result){
        if(!root) return;
        hector(root->left, result);
        result.push_back(root->val);
        hector(root->right, result);
    }
    public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>result;
       hector(root,result);
       return result;
    }
};