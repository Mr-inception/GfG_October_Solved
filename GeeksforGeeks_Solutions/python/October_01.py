class Solution:
    def multiply_two_lists(self, first, second):

        first_num,second_num = 0, 0
        
        while first or second:
            first_num = (first_num * 10 + first.data if first else first_num)
            second_num = (second_num * 10 + second.data if second else second_num)
            if first : first = first.next
            if second : second = second.next
            
        return (first_num*second_num) % (10**9 + 7)