//验证二叉搜索树
//https://leetcode-cn.com/problems/validate-binary-search-tree/

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

//解法1:迭代 时间复杂度 O(N) 空间复杂度O(N))
class Solution {
public:
    bool helpBST(TreeNode* root, long long left, long long right){
        if(!root) return true;
        if(left >= root->val||right <= root->val) return false;
        return helpBST(root->left,left,root->val)&&helpBST(root->right,root->val,right);
    }

    bool isValidBST(TreeNode* root) {
        return helpBST(root, LONG_MIN, LONG_MAX);
    }
};

//解法2:中序遍历法 时间复杂度 O(N) 空间复杂度O(N))
class Solution {
public:
    long pre = LONG_MIN;
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        if(!isValidBST(root->left)) return false;
        if(root->val <= pre) return false;
        pre=root->val;
        return isValidBST(root->right);
    }
};