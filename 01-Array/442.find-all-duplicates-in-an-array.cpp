class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> dup_nums;
        char* count = new char[100010]();
        for (auto num:nums) count[num-1]++;
        for (int i = 0; i < n; i++) if (count[i] == 2)
            dup_nums.push_back(i+1);
        return dup_nums;
    }
};