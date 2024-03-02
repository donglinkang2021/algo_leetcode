class Solution {
public:
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
};