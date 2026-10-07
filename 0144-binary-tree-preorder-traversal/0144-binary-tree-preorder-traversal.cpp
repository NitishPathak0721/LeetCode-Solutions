/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
void pattern(TreeNode* root, vector<int>&result) {
    if(!root) return;
    result.push_back(root->val);
    pattern(root->left,result);
    pattern(root->right,result);
}

public
    : vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        pattern(root, result);
        return result;
    }
};