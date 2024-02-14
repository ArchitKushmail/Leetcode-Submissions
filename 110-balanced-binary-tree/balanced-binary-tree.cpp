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
        // Base Case
        if(root==NULL) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        int ans = 1+max(lh,rh);
        return ans;
    }
    
    
    bool isBalanced(TreeNode* root) {
        // Base Case
        if(root==NULL){
            return true;
        }
        
        //1st case
        int lh = height(root->left);
        int rh = height(root->right);
        int diff = abs(lh-rh);
        bool ans1 = (diff<=1);
        
        bool lhans = isBalanced(root->left);
        bool rhans = isBalanced(root->right);
        
        if(ans1 && lhans && rhans){
            return true;
        }else{
            return false;
        }
        
        
    }
};