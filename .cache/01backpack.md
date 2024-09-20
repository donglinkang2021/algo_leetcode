# 问题

请用C++解决下面问题

给你一个 只包含正整数 的 非空 数组 nums 。请你判断是否可以将这个数组分割成两个子集，使得两个子集的元素和相等。

示例 1：

```plaintext
输入：nums = [1,5,11,5]
输出：true
解释：数组可以分割成 [1, 5, 5] 和 [11] 。
```

示例 2：

```plaintext
输入：nums = [1,2,3,5]
输出：false
解释：数组不能分割成两个元素和相等的子集。
```

提示：

```plaintext
1 <= nums.length <= 200
1 <= nums[i] <= 100
```

这个问题是典型的「Partition Equal Subset Sum」问题，属于「0-1 背包问题」的变种。我们需要判断是否可以将数组分割成两个子集，使得它们的和相等。

### 问题分析：

1. 如果整个数组的和为奇数，显然不可能将其分成两个元素和相等的子集，直接返回 `false`。
2. 如果数组的和为偶数，设这个和为 `S`，那么我们要找到一个子集，它的和为 `S/2`。这就是 0-1 背包问题：给定一个容量为 `S/2` 的背包和若干物品（物品的价值即为数组中的元素），问是否可以恰好填满这个背包。

### 动态规划思路：

- 定义一个布尔数组 `dp`，`dp[i]` 表示是否可以用数组中的若干个数凑出和为 `i`。
- 初始状态：`dp[0] = true`，因为凑出和为 0 总是可能的（选取空集）。
- 转移方程：对于每个数 `num`，从后向前遍历 `dp` 数组，更新 `dp[j] = dp[j] || dp[j - num]`（表示我们可以通过加入 `num` 来凑出和为 `j`）。

### 代码实现：


```cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
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
                dp[j] = dp[j] || dp[j - num];
            }
        }
        
        return dp[target];
    }
};

int main() {
    Solution solution;
    
    // 示例1
    vector<int> nums1 = {1, 5, 11, 5};
    cout << (solution.canPartition(nums1) ? "true" : "false") << endl;
    
    // 示例2
    vector<int> nums2 = {1, 2, 3, 5};
    cout << (solution.canPartition(nums2) ? "true" : "false") << endl;

    return 0;
}
```

### 解释：

1. 我们首先计算数组的总和 `sum`，如果 `sum` 是奇数，则不可能分成两个相等的子集，直接返回 `false`。
2. 否则，我们将目标设为 `sum / 2`，然后使用动态规划判断是否能够找到和为 `target` 的子集。
3. `dp` 数组用于记录某个和是否可达，`dp[0]` 初始化为 `true`，然后通过遍历更新 `dp`，最终返回 `dp[target]` 是否为 `true`。

### 示例输出：

```plaintext
true
false
``` 

这段代码的时间复杂度为 O(n * target)，其中 `n` 是数组的长度，`target` 是数组和的一半。