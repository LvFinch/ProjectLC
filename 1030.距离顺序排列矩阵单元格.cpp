/*
 * @Author: Akko
 * @Date: 2020-11-17 10:56:41
 * @LastEditTime: 2020-11-17 23:49:16
 * @LastEditors: Akko
 * @Description: 直接排序
 * @FilePath: /undefined/Users/akko/Code/ProjectLC/1030.距离顺序排列矩阵单元格.cpp
 * @ Copyright ©️ 2020 Akko All rights reserved.
 */
/*
 * @lc app=leetcode.cn id=1030 lang=cpp
 *
 * [1030] 距离顺序排列矩阵单元格
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> ret;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                ret.push_back({i, j});
            }
        }
        sort(ret.begin(), ret.end(), [=](vector<int>& a, vector<int>& b) {
            return abs(a[0] - r0) + abs(a[1] - c0) < abs(b[0] - r0) + abs(b[1] - c0);
        });
        return ret;
    }
};
// @lc code=end

