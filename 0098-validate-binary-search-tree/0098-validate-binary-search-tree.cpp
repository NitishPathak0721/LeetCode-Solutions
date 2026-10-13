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
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return inorder(root, prev);
    }

private:
    bool inorder(TreeNode* node, TreeNode*& prev) {
        // Base case: an empty subtree is valid
        if (node == nullptr) {
            return true;
        }

        // 1. Traverse the left subtree
        if (!inorder(node->left, prev)) {
            return false;
        }

        // 2. Validate current node against the previously visited node
        if (prev != nullptr && node->val <= prev->val) {
            return false;
        }
        prev = node; // Update the pointer to the current node

        // 3. Traverse the right subtree
        return inorder(node->right, prev);
    }
};