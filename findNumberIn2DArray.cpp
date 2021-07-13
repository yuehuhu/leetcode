//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数
//https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/

//解法2：搜索树，时间复杂度 O（m+n），空间复杂度 O（1）
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int row = 0;
        if(!matrix.size()) return false;
        int col = matrix[0].size()-1;
        while(row <matrix.size() && col >= 0){
            cout<<row<<" "<<col<<" "<<matrix[row][col]<<endl;
            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col] > target) {
                --col;
            }else{
                ++row;
            }
        }
        return false;
    }
};

//解法1：暴力法，(对题目解答理解不够)，时间复杂度 O（mn），空间复杂度 O（1）
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row==0) return false;
        int col = matrix[0].size();
        if(col==0) return false;
        int m = 0;
        while(m < row){
            int n = col-1;
                if(matrix[m][n] == target){
                    return true;
                }else if(matrix[m][n] < target){
                    ++m;
                }else{
                    while(n >= 0){
                        if(matrix[m][n] == target){
                            return true;
                        }else if(matrix[m][n]>target){
                            --n;
                        }else{
                            break;
                        }
                    }
                    ++m;
                }
            }
        return false;
    }
};
