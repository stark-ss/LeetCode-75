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
    vector<int> rightSideView(TreeNode* root) {
      vector<int> out;
      int c=0;
      printing(root,out,c,0);
      return out;
      }   
      void printing(TreeNode* node,vector<int> &res,int &h,int k){
       if(node==nullptr)
       return;
       k++;
       if(h<k){
        h=k;
        res.push_back(node->val);
       }
       printing(node->right,res,h,k);
       printing(node->left,res,h,k);
       k--;
      } 

};