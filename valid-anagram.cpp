//有效的字母异位词
//https://leetcode-cn.com/problems/valid-anagram/

//解法一：排序
//空间复杂度 nlogn 空间复杂度？？？？？
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

//解法二：哈希表
//空间复杂度 n 空间复杂度S
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> hash;
        int sz_s=s.size();
        int sz_t=t.size();
        if(sz_s!=sz_t) return false;
        for(int i=0;i<sz_s;i++){
            ++hash[s[i]];
        }
        for(int i=0;i<sz_t;i++){
            if(hash.find(t[i])==hash.end()||hash[t[i]]==0) return false;
            else --hash[t[i]];
        }
        return true;
    }
};
