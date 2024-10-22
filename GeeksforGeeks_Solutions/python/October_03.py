class Solution:
    def findMajority(self, arr):
        count_map = {} 
        result = []    
        n = len(arr)   
        
        for num in arr:
            if num in count_map:
                count_map[num] += 1
            else:
                count_map[num] = 1
        
        threshold = n // 3
        
        for candidate, count in count_map.items():
            if count > threshold:
                result.append(candidate)
        
        result.sort()
        
        return result