class Solution {
public:
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
};