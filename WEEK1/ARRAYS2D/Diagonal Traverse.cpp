Diagonal Traverse
link:https://leetcode.com/problems/diagonal-traverse/description/



class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> ans(m * n);
        int idx = 0;
        bool up = true;
        int row = 0, col = 0;

        while (idx < m * n) {
            ans[idx++] = mat[row][col];
            if (up) {
                if (col == n - 1) {
                    row++;
                    up = false;
                } else if (row == 0) {
                    col++;
                    up = false;
                } else {
                    row--;
                    col++;
                }
            } else {
                if (row == m - 1) {
                    col++;
                    up = true;
                } else if (col == 0) {
                    row++;
                    up = true;
                } else {
                    row++;
                    col--;
                }
            }
        }

        return ans;
    }
};
