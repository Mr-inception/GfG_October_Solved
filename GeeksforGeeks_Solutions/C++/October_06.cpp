#include <iostream>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<char>> &grid, int i, int j)
    {

        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
            return;
        vector<int> dx = {-1, 1, 0, 0, -1, 1, -1, 1};
        vector<int> dy = {0, 0, -1, 1, 1, 1, -1, -1};
        grid[i][j] = '0';
        for (int k = 0; k < 8; k++)
        {
            int new_x = i + dx[k];
            int new_y = j + dy[k];
            solve(grid, new_x, new_y);
        }
        return;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int counter = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    solve(grid, i, j);
                    counter++;
                }
            }
        }
        return counter;
    }
};