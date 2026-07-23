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
    int goodNodes(TreeNode* root) {
        int maxx=-10001;
        return counting(root,maxx);
           
    }
    
    int counting(TreeNode* a,int m){
 if(a==nullptr)
 return 0;       
 int c=(a->val>=m)?1:0;
 m=max(a->val,m);
 return c+ counting(a->left,m)+counting(a->right,m);
    }
};