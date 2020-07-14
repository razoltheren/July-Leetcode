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
        bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL){
            return true;
        }
        if((p and!q) or (!p and q)){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        bool leftcheck=isSameTree(p->left,q->left);
        bool rightcheck=isSameTree(p->right,q->right);
        
        if(leftcheck and rightcheck){
            return true;
            }else{
            return false;
        }
        }
};