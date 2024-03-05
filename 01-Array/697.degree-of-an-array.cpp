class Solution {
public:
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
};