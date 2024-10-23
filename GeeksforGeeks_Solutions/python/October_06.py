class Solution:
    def numIslands(self, grid):
        if not grid:
            return 0

        n, m = len(grid), len(grid[0])
        count = 0

        def dfs(x, y):
            if x < 0 or x >= n or y < 0 or y >= m or grid[x][y] == 0:
                return
            grid[x][y] = 0
            for dx in [-1, 0, 1]:
                for dy in [-1, 0, 1]:
                    if not (dx == 0 and dy == 0):
                        dfs(x + dx, y + dy)

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    count += 1
                    dfs(i, j)

        return count
