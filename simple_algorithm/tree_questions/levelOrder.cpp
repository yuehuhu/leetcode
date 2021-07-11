//二叉树的层序遍历
// https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnldjj/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

//解法1:广度优先遍历 时间复杂度 O(N) 空间复杂度O(N)
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> Q;
    vector<vector<int>> res;
    if (!root) return res;
    Q.push(root);
    while (!Q.empty()) {
      int size = Q.size();
      vector<int> tmp;
      while (size > 0) {
        TreeNode* node1 = Q.front();
        Q.pop();
        tmp.push_back(node1->val);
        if (node1->left) {
          Q.push(node1->left);
        }
        if (node1->right) {
          Q.push(node1->right);
        }
        size--;
      }
      res.push_back(tmp);
    }
    return res;
  }
};