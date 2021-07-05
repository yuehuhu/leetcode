//合并两个有序数组
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnumcr/

//解法1:快排 时间复杂度 O((m+n)log(m+n)) 空间复杂度 O((m+n)log(m+n))
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
