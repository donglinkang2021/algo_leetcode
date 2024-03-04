class Solution {
public:
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
};