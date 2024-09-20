#include <bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
    // 整个算法的思路可以想象是一个俄罗斯方块叠高度的问题
    // 每个数就是一个俄罗斯方块，数的高度就是俄罗斯方块的高度
    // 如果可以平分，那么就是可以叠出一个高度为 sum / 2 的俄罗斯方块
    // 整个dp数组就是在模拟叠俄罗斯方块的过程
    // 在可以叠出高度的地方，就是true，否则就是false 
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    // 如果总和是奇数，直接返回 false
    if (sum % 2 != 0) return false;
    
    int target = sum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true;  // 凑出和为0总是可能的
    
    for (int num : nums) {
        for (int j = target; j >= num; --j) {
            // 从后往前遍历就是在模拟方块从上面掉下来的过程
            // 如果 dp[j - num] 可以凑出来，那么 dp[j] 也可以凑出来
            // 形象一点就是这个地方有个站脚了，就可以继续往上叠
            dp[j] = dp[j] || dp[j - num];
        }
    }
    
    return dp[target];
}