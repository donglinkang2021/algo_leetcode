class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // bubble method
        int n = nums.size(), left = 0; 
        for(int right = 0; right < n; right++){
            if (nums[right] != 0){
                swap(nums[left], nums[right]); left++;
            }
        }
    }
};