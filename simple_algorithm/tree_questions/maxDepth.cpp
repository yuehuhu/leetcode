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

//二叉树的最大深度
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnd69e/

//解法1:广度优先搜索 时间复杂度 O(N) 空间复杂度O(N))
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        int res = 0;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size>0){
                TreeNode* newNode=q.front();
                q.pop();
                if(newNode->left) q.push(newNode->left);
                if(newNode->right) q.push(newNode->right);
                --size;
            }
            ++res; 
        }
        return res;
    }
};


//解法2:深度优先搜索 时间复杂度 O(N) 空间复杂度O(height)
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};