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
private:
    void helper(TreeNode *root, TreeNode* &prev, TreeNode* &first, TreeNode* &last){
        if(root==NULL)
            return ;
        helper(root->left,prev,first,last);
        if(prev){
            if(root->val < prev->val){
                if(!first)
                    first=prev;
                last=root;
                
            }
        }
        prev=root;
        helper(root->right,prev,first,last);
        
    }
public:
    void recoverTree(TreeNode* root) {
        TreeNode *prev=NULL, *first=NULL, *last=NULL;
        helper(root,prev,first,last);
        swap(first->val,last->val);
    }
};
