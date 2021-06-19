// 给定一个正整数 n ，输出外观数列的第 n 项。
// https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnpvdm/

// 遍历法
class Solution {
public:
    string change(string pre){
        int left = 0;
        int sz = pre.size();
        string res = "";
        for(int i=0; i<=sz; i++){
            if(pre[i]!=pre[left]){
                res.push_back(i-left+'0');
                res.push_back(pre[left]);
                left=i;
            }
        }
        return res;
    }

    string countAndSay(int n) {
        string pre = "1";
        string cur = "1";
        for(int i = 0; i < n-1; i++){
            cur=change(pre);
            pre=cur;
        }
        return cur;
    }
};

//递归法
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string pre = countAndSay(n-1);
        string cur="";
        int cnt=1;
        for(int i = 0; i < pre.size(); i++){
            if(pre[i] != pre[i+1]){
                cur.push_back(cnt+'0');
                cur.push_back(pre[i]);
                cnt=1;
            }else{
                ++cnt;
            }
        }
        return cur;
    }
};