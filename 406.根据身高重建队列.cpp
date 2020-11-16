/*
 * @Author: Akko
 * @Date: 2020-11-17 00:01:58
 * @LastEditTime: 2020-11-17 00:04:55
 * @LastEditors: Akko
 * @Description: 
 * @FilePath: /undefined/Users/akko/Code/ProjectLC/406.根据身高重建队列.cpp
 * @ Copyright ©️ 2020 Akko All rights reserved.
 */
/*
 * @lc app=leetcode.cn id=406 lang=cpp
 *
 * [406] 根据身高重建队列
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
    {
        sort(people.begin(), people.end(),
             [](const vector<int> &lhs, const vector<int> &rhs) { return lhs[0] == rhs[0] ? lhs[1] < rhs[1] : lhs[0] > rhs[0]; });
        int len = people.size();
        vector<vector<int>> res;
        for (int i = 0; i < len; ++i)
        {
            res.insert(res.begin() + people[i][1], people[i]);
        }
        return res;
    }
};
// @lc code=end
