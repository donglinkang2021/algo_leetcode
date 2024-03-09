class Solution {
public:
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
};