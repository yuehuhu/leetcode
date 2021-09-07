//
// Created by admin on 2021/9/6.
//

#include "e10.h"
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < size(nums); ++i) {
            int t = target - nums[i];
            if (m.count(t)) {
                return {i, m[t]};
            }
            m.emplace(nums[i], i);
        }
        return {-1, -1};
    }
};
