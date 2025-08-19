class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> row;
        
        for (int i = 0; i < numRows; i++) {
            row.push_back(vector<int>(i + 1, 1)); 
        
            
            for (int j = 1; j < i; j++) {
                row[i][j] = row[i - 1][j - 1] + row[i - 1][j];
            }
        }
        
        return row;
    }
};
