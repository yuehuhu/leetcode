//hash表
//https://leetcode-cn.com/problems/intersection-of-two-arrays-ii/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size()>nums2.size()){
            return intersect(nums2,nums1);
        }
        unordered_map<int,int> hash;
        for(int k : nums1){
            ++hash[k];
        }
        for(int k:nums2){
            if(hash.count(k)&&hash[k]>0){
                res.push_back(k);
                hash[k]--;
            }
        }
        return res;
    }
};
