class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        int n = matrix.size();       // Number of rows
        int m = matrix[0].size();    // Number of columns
        
        // Correctly assigning row and column boundaries
        int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;

        vector<int> ans;
        
        while (srow <= erow && scol <= ecol) {
            // 1. Move right across the top row
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }

            // 2. Move down the rightmost column
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }

            // 3. Move left across the bottom row
            for (int j = ecol - 1; j >= scol; j--) { // Fixed: j >= scol
                // Single row check to avoid duplicate processing
                if (srow == erow) {
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }

            // 4. Move up the leftmost column
            for (int i = erow - 1; i >= srow + 1; i--) {
                // Single column check to avoid duplicate processing
                if (scol == ecol) {
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }

            // Shrink the boundaries for the next inner layer
            srow++; 
            erow--; 
            scol++; 
            ecol--;
        }
        
        return ans; // Fixed: Added the missing return statement
    }
};