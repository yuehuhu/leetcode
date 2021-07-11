// 斐波那契数列
// https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/

////解法1:递归 时间复杂度 O(N) 空间复杂度O(N) 超过时间限制了
class Solution {
 public:
  int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
  }
};

//解法2:动态规划 时间复杂度 O(N) 空间复杂度O(1)
class Solution {
 public:
  int fib(int n) {
    int a = 0, b = 1, sum;
    for (int i = 1; i <= n; i++) {
      sum = (a + b) % 1000000007;
      a = b;
      b = sum;
    }
    return a;
  }
};