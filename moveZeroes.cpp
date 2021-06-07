// 移动零
// https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2ba4i/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int sz = nums.size();
        int right = sz-1;
        while(right < sz){
            while((left < sz) && (nums[left]!=0)){
                left++;
            }
            right = left + 1;

            while((right < sz) && (nums[right]==0)){
                right++;
            }
            if(right < sz){
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
        }
    }
};
