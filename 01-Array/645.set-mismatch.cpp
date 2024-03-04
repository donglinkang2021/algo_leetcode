class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int double_num, lose_num;
        int n = nums.size();
        vector<int> count(n);
        for(auto num:nums) count[num-1]++;
        for (int i = 0; i < n; i++){
            if (count[i] == 2) double_num = i+1;
            if (count[i] == 0) lose_num = i+1;
        }
        return {double_num, lose_num};
    }
};
