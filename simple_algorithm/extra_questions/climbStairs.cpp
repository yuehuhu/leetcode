//爬楼梯
//https://leetcode-cn.com/problems/climbing-stairs/

//解法1:动态规划 时间复杂度 O(N) 空间复杂度O(N)
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int res[n+1];
        res[0]=0;
        res[1]=1;
        res[2]=2;
        for(int i=3;i<=n;i++){
            res[i]=res[i-1]+res[i-2];
        }
        return res[n];
    }
};

//解法2:动态规划 时间复杂度 O(N) 空间复杂度O(1)
class Solution {
public:
    int climbStairs(int n) {
        int p=1,q=1,r=1;
        for(int i = 1; i < n; i++){
            r=p+q;
            p=q;
            q=r;
        }
        return r;
    }
};
