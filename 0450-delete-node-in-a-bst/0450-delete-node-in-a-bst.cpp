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
      TreeNode* findMin(TreeNode* root) {
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }else{
            if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }else if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
             // Find the In-Order Successor (smallest node in the right subtree)
            TreeNode* successor = findMin(root->right);
            
            // Copy the successor's value to the current node
            root->val = successor->val;
            
            // Delete the successor node from the right subtree
            root->right = deleteNode(root->right, successor->val);
        }
        return root;
    }
};