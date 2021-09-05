//旋转数组的最小数字
//https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
// 时间复杂度 O（logn），空间复杂度 O（1）
//注意分界条件，当numbers[mid] = numbers[r]的时候单独讨论
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l = 0, r = numbers.size()-1;
        while(l < r){
            int mid=l+(r-l)/2;
            cout << "mid: " << mid << " numbers:" << numbers[mid] << endl;
            if(numbers[mid] > numbers[r]){
                l = mid+1;
            }else if(numbers[mid] < numbers[r]){
                r = mid;
            }else{
              r=r-1;
            }
        }
        return numbers[l];
    }
};
