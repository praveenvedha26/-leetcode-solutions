/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        if(root==p)return p;
        if(root==q)return q;
        TreeNode* lh = lowestCommonAncestor(root->left,p,q);
        TreeNode* rh = lowestCommonAncestor(root->right,p,q);
        if(lh==NULL && rh!=NULL)return rh;
        if(lh!=NULL && rh==NULL)return lh;
        if(lh==NULL && rh==NULL)return NULL;
        if(lh!=NULL && rh!=NULL)return root;
        return 0;
    }
};