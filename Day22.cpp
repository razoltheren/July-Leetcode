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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) { return result; }
        queue<TreeNode *> q;
        q.push(root);
        int count = 0;
        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);
            for (int i = 0; i < n; ++i) {
                auto front = q.front();
                q.pop();
                if (front->left != nullptr) { q.push(front->left); }
                if (front->right != nullptr) { q.push(front->right); }
                level[i] = front->val;
            }
            if (count % 2 != 0) {
                reverse(level.begin(), level.end());
            }
            result.push_back(level);
            ++count;
        }
        return result;
    }
};