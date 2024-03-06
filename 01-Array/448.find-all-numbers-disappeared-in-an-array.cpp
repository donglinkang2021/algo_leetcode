
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        char* count = new char[n]();
        for (auto num:nums) if (!count[num-1]) count[num-1]=1;
        vector<int> disappear_nums;
        for (int i = 0; i < n; i++) if (!count[i])
            disappear_nums.push_back(i+1);
        return disappear_nums;
    }
};