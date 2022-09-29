#
# @lc app=leetcode.cn id=9 lang=python3
#
# [9] 回文数
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_x = str(x)
        len_x = len(str_x)
        half_x_index = int(len_x/2)
        for i in range(half_x_index):
            if i >= half_x_index:
                continue
            if str_x[i] != str_x[len_x-i-1]:
                return False 
        return True 
# @lc code=end

