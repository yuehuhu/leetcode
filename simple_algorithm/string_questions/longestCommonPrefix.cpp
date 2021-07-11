//最长公共前缀
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnmav1/
//横向扫描法
//时间复杂度 O（mn） 空间复杂度 O（1）
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()<1) return "";
        string prefix=strs[0];
        for(int i=0;i<strs.size();i++){
            prefix=longestCommonPrefix(prefix,strs[i]);
        }
        return prefix;
    }

    string longestCommonPrefix(string strs1,string strs2) {
        if(strs1.size()>strs2.size()) return longestCommonPrefix(strs2,strs1);
        string res="";
        for(int i=0;i<strs1.size();i++){
            if(strs1[i]==strs2[i]){
                res.push_back(strs1[i]);
            }else{
                return res;
            }
        }
        return res;     
    }
};

//纵向扫描法
//时间复杂度 O（mn） 空间复杂度 O（1）
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()<1) return "";
        int sz=strs[0].size();
        int count=strs.size();
        int i=0,j=0;
        for(j;j<sz;j++){
            cout<<j<<endl;
            for(i=0;i<count;i++){
                cout<<strs[i][j]<<"    "<<strs[0][j]<<endl;
                if(strs[i][j]!=strs[0][j]||j==strs[i].size()) {
                    return strs[0].substr(0,j);
                }
            }
        }
        return strs[0].substr(0,j);
    }
};