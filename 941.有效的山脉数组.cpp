/*
 * @lc app=leetcode.cn id=941 lang=cpp
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution
{
public:
    bool validMountainArray(vector<int> &A)
    {
        // int N = A.length(); //C++用size判断
        int N = A.size();
        int i = 0;
        //递增扫描
        while (i + 1 < N && A[i] < A[i + 1]) //注意+1
        {
            i++;
        }
        //判断
        if (i == 0 || i == N - 1)
        {
            return false;
        }
        //递减扫描
        while (i + 1 < N && A[i] > A[i + 1]) //注意+1
        {
            i++;
        }
        return i == N - 1;
    }
};
// @lc code=end
