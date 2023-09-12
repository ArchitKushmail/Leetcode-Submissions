class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();
    int x, y, empty = 1;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 0) ++empty;
            else if (grid[i][j] == 1) x = j, y = i;
    return dfs(grid, x, y, empty);
}

int dfs(vector<vector<int>>& grid, int x, int y, int empty) {
    if (x < 0 || x >= grid[0].size() || y < 0 || y >= grid.size() || grid[y][x] < 0) return 0;
    if (grid[y][x] == 2) return empty == 0;
    grid[y][x] = -2;
    int paths = dfs(grid, x + 1, y, empty - 1) + dfs(grid, x - 1, y, empty - 1) + dfs(grid, x, y + 1, empty - 1) + dfs(grid, x, y - 1, empty - 1);
    grid[y][x] = 0;
    return paths;
    }
};