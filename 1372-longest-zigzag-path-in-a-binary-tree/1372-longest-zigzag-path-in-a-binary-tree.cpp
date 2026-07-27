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
    int longestZigZag(TreeNode* root) {
        int c=0;
        bool move=true;
        zigzag(root,c,0,true);
        zigzag(root,c,0,false);
        return c;
    }
    void zigzag(TreeNode* a,int &c,int k,bool move){
        if(a==nullptr)
        return ;
        c=max(c,k);
        if(move){
        zigzag(a->left,c,k+1,false);
        zigzag(a->right,c,1,true);
        }
        else{
        zigzag(a->right,c,k+1,true);
        zigzag(a->left,c,1,false);
        }
         
    }
};