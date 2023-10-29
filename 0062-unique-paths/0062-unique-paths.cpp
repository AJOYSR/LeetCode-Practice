class Solution {

private:
    int total_paths(int row, int col, vector<vector<int>> &paths, int m, int n){
        if(row>=m || col>=n) return 0;
        if(row == m-1 && col == n-1) return 1;

        if(paths[row][col] != -1) return paths[row][col];

        return paths[row][col] = total_paths(row, col+1, paths, m, n) + total_paths(row+1, col, paths, m, n);
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> paths(m, vector<int> (n, -1));
        int row = 0, col = 0;

        return total_paths(row, col, paths, m, n);
    }
};