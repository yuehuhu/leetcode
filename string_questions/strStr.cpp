//实现 strStr()
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnr003/

//暴力法
//时间复杂度O（n*（m-n））
//空间复杂度O（1）
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()){
            return -1;
        }
        if(needle.size()==0||haystack.size()==0){
            return 0;
        }
        int left=0;
        int sz =haystack.size();
        for(int i=0; i < sz-needle.size()+1; i++){
            if(haystack[i]==needle[0]){
                left=i;
                while(haystack[left]==needle[left-i]&&(left-i)<needle.size()){
                    left++;
                }
                if(left-i==needle.size()){
                    return i;
                }
            }                        
        }
        return -1;
    }
};