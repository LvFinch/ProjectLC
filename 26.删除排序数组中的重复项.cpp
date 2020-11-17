/*
 * @Author: Akko
 * @Date: 2020-11-17 10:50:27
 * @LastEditTime: 2020-11-17 10:50:54
 * @LastEditors: Akko
 * @Description: 
 * @FilePath: /undefined/Users/akko/Code/ProjectLC/26.删除排序数组中的重复项.cpp
 * @ Copyright ©️ 2020 Akko All rights reserved.
 */
/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // 别忘记空数组的判断
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < (nums.size() - 1); fastIndex++){
            if(nums[fastIndex] != nums[fastIndex + 1]) { // 发现和后一个不相同
                nums[++slowIndex] = nums[fastIndex + 1]; //slowIndex = 0 的数据一定是不重复的，所以直接 ++slowIndex
            }
        }
        return slowIndex + 1; //别忘了slowIndex是从0开始的，所以返回slowIndex + 1
    }
};
// @lc code=end

