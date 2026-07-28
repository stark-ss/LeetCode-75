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
    int maxLevelSum(TreeNode* root) {
       queue<TreeNode*> bfs;
       bfs.push(root);
       int sum=0,max=INT_MIN,level=1,res=1;
       TreeNode* pos=root;
       TreeNode* temp=nullptr;
       while(!bfs.empty()){

        if(!bfs.front()){
            bfs.pop();
            continue;
        }
        sum+=bfs.front()->val;
        if(bfs.front()->left){
        bfs.push(bfs.front()->left);
        temp=bfs.front()->left;
        }

        if(bfs.front()->right){
        bfs.push(bfs.front()->right);
        temp=bfs.front()->right;
        }

        if(bfs.front()==pos){

        if(sum>max){
        max=sum;
        res=level;
        }

        level++;
        pos=temp;
        temp=nullptr;
        sum=0;
        }
        bfs.pop(); 
       } 
       return res;
    }
};