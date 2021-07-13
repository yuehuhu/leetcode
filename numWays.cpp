//一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法
//https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/

//解法1:动态规划法 时间复杂度O（n）空间复杂度O（1）
class Solution {
public:
    int numWays(int n) {
        if(n==0) return 1;
        int l = 0,  r= 1;
        int res;
        for(int i = 1; i <= n; i++){
            res = (l + r)%1000000007;
            l = r;
            r = res;   
        }
        return res;
    }
};
