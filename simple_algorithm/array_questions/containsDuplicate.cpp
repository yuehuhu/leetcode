//存在重复元素
////////////https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x248f5/

//////先排序后遍历
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i = 0; i < nums.size()-1; i++){
           if(nums[i]==nums[i+1]){
               return true;
           }
       }
       return false;
    }
};

//////哈希表
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x : nums){
            if(s.find(x)!=s.end()){
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};
