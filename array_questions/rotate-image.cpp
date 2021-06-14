// 旋转图像
// https://leetcode-cn.com/problems/rotate-image/

//解法一：用一个新的数组进行赋值拷贝
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sz = matrix[0].size();
        int res[sz][sz];
        for(int row=0;row<sz;row++){
            for(int col=0;col<sz;col++){
                res[col][sz-row-1]=matrix[row][col];
            }
        }
        for(int row=0;row<sz;row++){
            for(int col=0;col<sz;col++){
                matrix[col][row]=res[col][row];
            }
        }
    }
};
