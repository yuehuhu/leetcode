//验证回文串
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xne8id/
//时间复杂度|S|,空间复杂度O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right=s.size()-1;
        while(left < right){
            while(left<right&&!isalnum(s[left])){
                cout<<s[left]<<"-----"<<isalnum(s[left]);
                left++;
            }
            while(left<right&&!isalnum(s[right])){
                right--;
            }
            if(tolower(s[left])==tolower(s[right])){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
};
