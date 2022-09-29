#
# @lc app=leetcode.cn id=1 lang=python
#
# [1] 两数之和
#

# @lc code=start
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
    
        num_length = len(nums)     
        for i in range(num_length):
            for j in range(i+1, num_length):
                if nums[i] + nums[j] == target:
                    return [i, j]
# @lc code=end

