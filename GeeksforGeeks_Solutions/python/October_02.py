class Solution:
    def rotateDelete(self,  arr):
        var1 = 0
        var2 = 0
        var3 = len(arr)-1

        while(len(arr) != 1):
            x = arr[len(arr) - 1]
            arr.insert (0, x)
            arr.pop (len(arr) - 1)
            y = var3 - var1 -var2
            y = 0 if y<0 else y
            arr.pop(y)
            var1 += 1
            var2 += 1
        return arr[0]