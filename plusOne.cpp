//加一
//https://leetcode-cn.com/problems/plus-one/


//最简便的写法
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size();
        vector<int> res;
        int flag = 0;
        int num = 0;
        digits[a-1]=digits[a-1]+1;
        while(a > 0){
            num = (digits[a - 1] + flag) % 10;
            flag=(digits[a - 1] + flag) / 10;
            res.push_back(num);
            a--;
        }
        if(flag>0){
            res.push_back(flag);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};


//自己的写法
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size();
        vector<int> res;
        int flag = 0;
        int num = (digits[a - 1] + 1) % 10;

        flag=(digits[a - 1] + 1) / 10;
        res.push_back(num);
        a--;

        while(a > 0){
            num = (digits[a - 1] + flag) % 10;
            flag=(digits[a - 1] + flag) / 10;
            res.push_back(num);
            a--;
        }
        if(flag>0){
            res.push_back(flag);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
