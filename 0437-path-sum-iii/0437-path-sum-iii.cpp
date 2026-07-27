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
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int> sum;
        sum[0]=1;
        return paths(root,0,targetSum,sum);
    }
    int paths(TreeNode* a,long long c, int t,unordered_map<long long,int> &s){
    if(!a)
    return 0;
    c+=a->val;
    int count=s[c-t];
    s[c]++;
    count+=paths(a->left,c,t,s);
    count+=paths(a->right,c,t,s);
    s[c]--;
    return count;
        
    }

};