#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 1e3 + 10;

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int x = m, y = n;
    for (auto &op : ops) {
        x = min(x, op[0]);
        y = min(y, op[1]);
    }
    return x * y;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    if (matrix.empty()) return res;
    int rows = matrix.size(), cols = matrix[0].size();
    int u = 0, d = rows - 1, l = 0, r = cols - 1;
    while (true) {
        for (int i = l; i <= r; i++) res.push_back(matrix[u][i]);
        if (++u > d) break;
        for (int i = u; i <= d; i++) res.push_back(matrix[i][r]);
        if (--r < l) break;
        for (int i = r; i >= l; i--) res.push_back(matrix[d][i]);
        if (--d < u) break;
        for (int i = d; i >= u; i--) res.push_back(matrix[i][l]);
        if (++l > r) break;
    }
    return res;
}

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> res(n, vector<int>(n));
    int u = 0, d = n - 1, l = 0, r = n - 1;
    int num = 1;
    while (true) {
        for (int i = l; i <= r; i++) res[u][i] = num++;
        if (++u > d) break;
        for (int i = u; i <= d; i++) res[i][r] = num++;
        if (--r < l) break;
        for (int i = r; i >= l; i--) res[d][i] = num++;
        if (--d < u) break;
        for (int i = d; i >= u; i--) res[i][l] = num++;
        if (++l > r) break;
    }
    return res;
}

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> res;
    if (mat.empty()) return res;
    int m = mat.size(), n = mat[0].size();
    for (int i = 0; i < m + n - 1; i++) {
        if (i % 2 == 0) {
            for (int x = i; x >= 0; x--) {
                int y = i - x;
                if (x < m && y < n) res.push_back(mat[x][y]);
            }
        } else {
            for (int y = i; y >= 0; y--) {
                int x = i - y;
                if (x < m && y < n) res.push_back(mat[x][y]);
            }
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> ops = {{2, 2}, {3, 3}};
    cout << maxCount(3, 3, ops) << endl;
    return 0;
}