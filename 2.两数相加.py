#
# @lc app=leetcode.cn id=2 lang=python3
#
# [2] 两数相加

from difflib import restore
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    
    def __str__(self) -> str:
        return self.val 
        
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        # str_l2 = str(l2)
    
        int_l1_reversed =  int("".join(list([str(x.val) for x in reversed(l1)])))
        int_l2_reversed =  int("".join(list([str(x.val) for x in reversed(l2)])))
        result = int_l1_reversed + int_l2_reversed
        # result_list = [] 
        # str_result = str(result)
        # str_result_len = len(str_result)
        # for i in range(str_result_len):
        #     __val = int(str_result[str_result_len-(i+1)])
        #     print(__val)
        #     __next = int(str_result[str_result_len-i]) if i != str_result_len -1 else None 
        #     result_list.append(ListNode(val=__val, next=__next))
        # return result_list
        return [ListNode(val=x) for x in str(result)]
        # return parse_result_node(result=result)

# def parse_result_node(result: int):
#         result_list = [] 
#         str_result = str(result)
#         str_result_len = len(str_result)
#         # print(str_result_len)
#         for i in range(str_result_len): 
#             __val = int(str_result[str_result_len-(i+1)])
#             # print(__val)
#             __next = int(str_result[str_result_len-(i+2)]) if i != 0 else None 
#             # result_list.append(ListNode(val=__val, next=__next))
#             result_list.append(__val)
#         return result_list

# if __name__ == "__main__":
#     l1 = parse_result_node(281)
#     l2 = parse_result_node(9908)
#     print(Solution().addTwoNumbers(l1, l2))
# @lc code=end
