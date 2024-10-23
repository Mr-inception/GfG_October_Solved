class Solution:
    def findSmallest(self, arr):
        x = 1
        for num in arr:
            if num > x:
                break
            x += num
        
        return x
