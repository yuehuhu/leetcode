//对称二叉树
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn7ihv/

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

//解法1:迭代法 时间复杂度 O(N) 空间复杂度O(N)
class Solution {
public:
    bool check(TreeNode* node1,TreeNode* node2){
        queue <TreeNode*> Q;
        Q.push(node1);
        Q.push(node2);
        while(!Q.empty()){
            TreeNode* u=Q.front();Q.pop();
            TreeNode* v=Q.front();Q.pop();
            if(!u&&!v) continue;
            if((!u||!v)||(u->val!=v->val)) return false;
            Q.push(u->left);
            Q.push(v->right);
            Q.push(u->right);
            Q.push(v->left);
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        return check(root,root);
    }
};

//解法2:递归法 时间复杂度 O(N) 空间复杂度O(N))
class Solution {
public:
    bool check(TreeNode* u,TreeNode* v) {
        if(!u&&!v) return true;
        if(!u||!v) return false;
        return (u->val==v->val)&&check(u->left,v->right)&&check(u->right,v->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root,root);
    }
};