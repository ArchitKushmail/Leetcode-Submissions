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
    int height(TreeNode* root){
    // Base case
    if(root==NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int ans = 1 + max(leftheight,rightheight);
    return ans; 
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        // One case we will solve
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int diff = abs(leftheight-rightheight);
        bool ans1 = (diff<=1);
        
        // Call Recursion
        int leftans = isBalanced(root->left);
        int rightans = isBalanced(root->right);
        if(ans1 && leftans && rightans){
            return true;
        }else{
            return false;
        }
    }
};