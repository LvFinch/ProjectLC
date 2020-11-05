/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> ans;
        bool flag = false;
        int N = intervals.size();
        for (int i = 0; i < N; i++)
        {
            if (newInterval[0] > intervals[i][1]) //判断新插入数组左端大于原数组右端
            {
                ans.push_back(intervals[i]); //小于的直接存入ans
                continue;
            }
            if (newInterval[1] < intervals[i][0])
            {
                ans.push_back(newInterval); //直接将插入数组存入ans
                flag = !flag;
                for (; i < N; i++)
                {
                    ans.push_back(intervals[i]); //剩余的直接存入ans
                }
                break;
            }
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
        if (!flag)
        {
            ans.push_back(newInterval);
        }
        return ans;
    }
};
// @lc code=end
