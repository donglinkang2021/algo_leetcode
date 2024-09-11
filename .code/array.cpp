#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 1e3 + 10;

int minMoves(vector<int>& nums) {
    int sum = 0;
    int min_elem = 0x7fffffff;
    for (auto & num: nums){
        sum += num;
        min_elem = min(min_elem, num);
    }
    int n = nums.size();
    return sum - n * min_elem;
}

void moveZeroes(vector<int>& nums) {
    // bubble method
    int n = nums.size(), left = 0; 
    for(int right = 0; right < n; right++){
        if (nums[right] != 0){
            swap(nums[left], nums[right]); left++;
        }
    }
}

bool checkPossibility(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        int peak = nums[i];
        int after_peak = nums[i+1];
        if (peak > after_peak){
            count++;
            if (count > 1) return false;
            if (i > 0 && nums[i-1] > after_peak) nums[i+1] = peak;
        }
    }
    return true;
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    int cycles = gcd(k, n);
    for (int cycle = 0; cycle < cycles; ++cycle) {
        int prev = cycle;
        int buffer = nums[cycle];
        do {
            int next = (prev + k) % n;
            swap(nums[next], buffer);
            prev = next;
        } while (cycle != prev);
    }
}

int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();
    int curF = 0, sum = 0, buffer = 0;
    // init
    for (int i = 0; i < n; i++){
        buffer = nums[i];
        sum += buffer; 
        curF += i * buffer;
    }
    int maxF = 0x80000000;
    for (int i = 0; i < n; i++){
        curF = curF + sum - n * nums[n - 1 - i];
        if (curF > maxF) maxF = curF;
    }
    return maxF;
}

vector<int> findErrorNums(vector<int>& nums) {
    int double_num, lose_num;
    int n = nums.size();
    char* count = new char[10000]();
    for(auto num:nums) count[num-1]++;
    for (int i = 0; i < n; i++){
        if (count[i] == 2) double_num = i+1;
        if (count[i] == 0) lose_num = i+1;
    }
    return {double_num, lose_num};
}

int findShortestSubArray(vector<int>& nums) {
    int n = nums.size();
    int* count = new int[50010]();

    // count the freq and find max num
    int num_max = 0x80000000;
    for(auto num:nums) {
        count[num]++;
        if (num > num_max) num_max = num;
    }

    // get max freq
    int max_Freq = 0;
    for (int num = 0; num <= num_max; num++) 
        if (count[num] && count[num] > max_Freq)
            max_Freq = count[num];

    // get num in nums with same max freq
    vector<int> nums_maxF;
    for (int num = 0; num <= num_max; num++) 
        if (count[num] && count[num] == max_Freq)
            nums_maxF.push_back(num);

    // get min subset length in num with max freq
    int min_len = 0x0fffffff;
    for (auto num_maxF:nums_maxF){
        int boa = 0, eoa = 0, cnt = 0;
        for (int i = 0; i < n; i++) if (nums[i] == num_maxF) {
            if (cnt == 0) boa = i;
            eoa = i;
            cnt++;
        }
        min_len = min(min_len, eoa - boa + 1);
    }
    return min_len;
}

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    char* count = new char[n]();
    for (auto num:nums) if (!count[num-1]) count[num-1]=1;
    vector<int> disappear_nums;
    for (int i = 0; i < n; i++) if (!count[i])
        disappear_nums.push_back(i+1);
    return disappear_nums;
}

vector<int> findDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> dup_nums;
    char* count = new char[100010]();
    for (auto num:nums) count[num-1]++;
    for (int i = 0; i < n; i++) if (count[i] == 2)
        dup_nums.push_back(i+1);
    return dup_nums;
}

int firstMissingPositive(vector<int>& nums) {
    // T: O(n) S: O(1)
    // the ans must in 1 ~ n+1
    // if ans in [1, n] then in [1, n]
    // else ans not in [1, n] mean that nums = 1,...,n so ans = n+1
    int n = nums.size();
    // note here: this for-loop we can not use `auto num:nums`
    // because we must change the origin array
    for (int& num:nums) if (num <= 0 or num >= n + 1) num = n + 1;
    for (int i = 0; i < n; i++) {
        int idx = abs(nums[i]);
        if (idx >= 1 and idx <= n)
            nums[idx - 1] = - abs(nums[idx - 1]);
    }
    for (int i = 0; i < n; i++) if (nums[i] > 0)
        return i + 1;
    return n + 1;
}

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int maxCount = 0, count = 0;
    for (int i = 0; i < n; i++){
        if (nums[i]) count++;
        else {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;
}

int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int totalPoisonTime = duration;
    int n = timeSeries.size();
    for (int i = 1; i < n; i++)
        totalPoisonTime += min(duration, timeSeries[i] - timeSeries[i-1]);
    return totalPoisonTime;
}

int thirdMax(vector<int>& nums) {
    set<int> top3;
    for (const int& num : nums){
        top3.insert(num);
        if (top3.size() > 3) top3.erase(top3.begin());
    }
    return top3.size() == 3 ? *top3.begin() : *top3.rbegin();
}

int maximumProduct(vector<int>& nums) {
    // 最小的和第二小的
    int min1 = INT_MAX, min2 = INT_MAX;
    // 最大的、第二大的和第三大的
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int x: nums) {
        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }

        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max3 = max2;
            max2 = x;
        } else if (x > max3) {
            max3 = x;
        }
    }

    return max(min1 * min2 * max1, max1 * max2 * max3);
}

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

vector<int> getRow(int rowIndex) {
    // n = rowIndex
    // pascal = {C^i_n|i=0,1,...,n}
    // C^i_n = C^{i-1}_n * (n - (i-1)) / i
    vector<int> pascal(rowIndex + 1);
    pascal[0] = 1;
    for(int i = 0; i < rowIndex; i++)
        pascal[i+1] = 1LL * pascal[i] * (rowIndex - i) / (i + 1);
    return pascal;
}

bool valid(int rows, int cols, int x, int y){
    return x >= 0 && x < rows && y >= 0 && y < cols;
}
vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int rows = img.size(), cols = img[0].size();
    // vector<vector<int>> ret(rows, vector<int>(cols));
    vector<vector<int>> ret = img;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num = 0, sum = 0;
            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {
                    if (valid(rows, cols, x, y)) {
                        num++;
                        sum += img[x][y];
                    }
                }
            }
            ret[i][j] = sum / num;
        }
    }
    return ret;
}

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int x = m, y = n;
    for (auto &op : ops) {
        x = min(x, op[0]);
        y = min(y, op[1]);
    }
    return x * y;
}

int countBattleships(vector<vector<char>>& board) {
    int count = 0;
    int rows = board.size(), cols = board[0].size();
    for (int i = 0; i < rows; i++)                                                  
        for (int j = 0; j < cols; j++)
            if (board[i][j] == 'X' && 
                (j == 0 || board[i][j - 1] != 'X') && 
                (i == 0 || board[i - 1][j] != 'X'))
                count++;
    return count;
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