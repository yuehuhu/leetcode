//买卖股票的最佳时机
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn8fsh/

//解法1:贪心算法 时间复杂度 O(N) 空间复杂度O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int tmp_min = prices[0], tmp_max;
        int sz = prices.size();
        int i = 1;
        while(i < sz){
            while(i < sz && prices[i] <= tmp_min){
                tmp_min = prices[i];
                ++i;
            }
            tmp_max = tmp_min;
            while(i < sz && prices[i] >= tmp_max){
                tmp_max = prices[i];
                ++i;
            }
            if(tmp_max - tmp_min > res){
                res = tmp_max - tmp_min;
            }
        }
        return res;
    }
};
