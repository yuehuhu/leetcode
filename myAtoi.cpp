// 字符串转换整数 (atoi)
// https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnoilh/

//时间复杂度 O（N）
//空间复杂度 O（1）
//枚举
class Solution {
public:
    int myAtoi(string s) {
        int sz = s.size();
        int index = 0;
        int flag = 1;
        long res = 0; 
        while(index < sz && s[index] ==' '){
            index++;
        }
        if(s[index] == '-'){
            flag = -1;
            index++;
        }
        if(flag==1 && s[index] == '+'){
            index++;
        }
        while(index < sz && s[index] >= '0' && s[index] <= '9'){
            res = res * 10 + (s[index] - '0')*flag;
            if(res<INT_MIN){
                return INT_MIN;
            }
            if(res>INT_MAX){
                return INT_MAX;
            }
            index++;
        }
        return res;

    }
};


