
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> yanhuiTriangle(numRows);
        for (int i = 0; i < numRows; i++){
            yanhuiTriangle[i].resize(i+1);
            yanhuiTriangle[i][0] = yanhuiTriangle[i][i] = 1;
            for (int j = 1; j < i; j++)
                yanhuiTriangle[i][j] = yanhuiTriangle[i-1][j-1] + yanhuiTriangle[i-1][j];
        }
        return yanhuiTriangle;
    }
};