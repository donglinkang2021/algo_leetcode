# [力扣刷题攻略] Re：从零开始的力扣刷题生活

> LeetCode 发起于 2023-03-06 最近编辑于 2024-05-16 来自上海

这是一份由力扣官方整理的推荐刷题路径，适合 **考虑系统性地按各知识点刷题** 的扣友。
你可以这样使用本刷题攻略：

- 按照本讨论帖推荐的顺序逐一刷题，适合第一次系统性刷题的朋友；
- 按照索引找到对应的知识点，选择自己较为薄弱的算法知识针对性刷题；

除了按照本帖推荐的刷题路径进行刷题以外，你还可以一同参与这个题单的创建与维护，你可以：

1. 提供 **更合理的刷题顺序**；
2. 提供 **知识点下更合理的题目分类**；
3. 提供 **题目分类对应的典型题**；
4. 分享 **和算法有关的精彩的文章、题解或讨论帖**；
5. 贡献 **自己对这个知识点的精彩总结**；

## 更新日志

| 日期           | 内容                                                         | 贡献者                                              |
| -------------- | ------------------------------------------------------------ | --------------------------------------------------- |
| 2023 - 03 - 03 | 【数组篇 - 统计数组中的元素】删除 [274. H 指数](https://leetcode.cn/problems/h-index/)，这题是「二分查找」，已经不是单纯考数组的问题了。【链表篇 - 链表中的双指针技巧】增加 [142. 环形链表 II](https://leetcode.cn/problems/linked-list-cycle-ii/) | [liweiwei1419](https://leetcode.cn/u/liweiwei1419/) |
| 2023 - 03 - 07 | 【图篇】修正了深度优先搜索和广度优先搜索英文使用错误。       | [Mrclick](https://leetcode.cn/u/mrclick/)           |
| 2023 - 03 - 07 | 【树与二叉树篇】调整了【题目分类】的颗粒度和排序             | [力扣 (LeetCode)](https://leetcode.cn/u/leetcode/)  |
| 2023 - 03 - 10 | 【滑动窗口专题】、【二分查找专题】、【双指针专题】、【前缀和专题】、【位运算专题】完成更新。 | [力扣 (LeetCode)](https://leetcode.cn/u/leetcode/)  |

## 索引

- [\[力扣刷题攻略\] Re：从零开始的力扣刷题生活](#力扣刷题攻略-re从零开始的力扣刷题生活)
  - [更新日志](#更新日志)
  - [索引](#索引)
  - [数组篇](#数组篇)
  - [链表篇](#链表篇)
  - [哈希表篇](#哈希表篇)
  - [栈与队列篇](#栈与队列篇)
  - [字符串篇](#字符串篇)
  - [数与位篇](#数与位篇)
  - [递归篇](#递归篇)
  - [分治篇](#分治篇)
  - [贪心篇](#贪心篇)
  - [排序算法篇](#排序算法篇)
  - [字符串算法篇](#字符串算法篇)
  - [树与二叉树篇](#树与二叉树篇)
  - [动态规划篇](#动态规划篇)
  - [图篇](#图篇)
  - [滑动窗口专题](#滑动窗口专题)
  - [二分查找专题](#二分查找专题)
  - [双指针专题](#双指针专题)
  - [前缀和专题](#前缀和专题)
  - [位运算专题](#位运算专题)

## 数组篇

| 题目分类             | 题目编号                                                     |
| -------------------- | ------------------------------------------------------------ |
| 数组的改变、移动     | [453. 最小移动次数使数组元素相等](https://leetcode.cn/problems/minimum-moves-to-equal-array-elements/) // [665. 非递减数列](https://leetcode.cn/problems/non-decreasing-array/) // [283. 移动零](https://leetcode.cn/problems/move-zeroes/) |
| 数组的旋转           | [189. 旋转数组](https://leetcode.cn/problems/rotate-array/) // [396. 旋转函数](https://leetcode.cn/problems/rotate-function/) |
| 统计数组中的元素     | [645. 错误的集合](https://leetcode.cn/problems/set-mismatch/) // [697. 数组的度](https://leetcode.cn/problems/degree-of-an-array/) // [448. 找到所有数组中消失的数字](https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/) // [442. 数组中重复的数据](https://leetcode.cn/problems/find-all-duplicates-in-an-array/) // [41. 缺失的第一个正数](https://leetcode.cn/problems/first-missing-positive/) |
| 数组的遍历           | [485. 最大连续1的个数](https://leetcode.cn/problems/max-consecutive-ones/) // [495. 提莫攻击](https://leetcode.cn/problems/teemo-attacking/) // [414. 第三大的数](https://leetcode.cn/problems/third-maximum-number/) // [628. 三个数的最大乘积](https://leetcode.cn/problems/maximum-product-of-three-numbers/) |
| 二维数组及滚动数组   | [118. 杨辉三角](https://leetcode.cn/problems/pascals-triangle/) // [119. 杨辉三角 II](https://leetcode.cn/problems/pascals-triangle-ii/) // [661. 图片平滑器](https://leetcode.cn/problems/image-smoother/) // [598. 范围求和 II](https://leetcode.cn/problems/range-addition-ii/) // [419. 甲板上的战舰](https://leetcode.cn/problems/battleships-in-a-board/) |
| 特定顺序遍历二维数组 | [54. 螺旋矩阵](https://leetcode.cn/problems/spiral-matrix/) // [59. 螺旋矩阵 II](https://leetcode.cn/problems/spiral-matrix-ii/) // [498. 对角线遍历](https://leetcode.cn/problems/diagonal-traverse/) |
| 二维数组变换         | [566. 重塑矩阵](https://leetcode.cn/problems/reshape-the-matrix/) // [48. 旋转图像](https://leetcode.cn/problems/rotate-image/) // [73. 矩阵置零](https://leetcode.cn/problems/set-matrix-zeroes/) // [289. 生命游戏](https://leetcode.cn/problems/game-of-life/) |
| 前缀和数组           | [303. 区域和检索 - 数组不可变](https://leetcode.cn/problems/range-sum-query-immutable/) // [304. 二维区域和检索 - 矩阵不可变](https://leetcode.cn/problems/range-sum-query-2d-immutable/) // [238. 除自身以外数组的乘积](https://leetcode.cn/problems/product-of-array-except-self/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[没有人一起从零开始刷力扣(一)——数组篇](https://leetcode.cn/circle/article/oalBEI/) by [noone_](https://leetcode.cn/u/noone_/)
[《数组和字符串》](https://leetcode.cn/leetbook/detail/array-and-string/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 链表篇

| 题目分类           | 题目编号                                                     |
| ------------------ | ------------------------------------------------------------ |
| 移除与插入链表元素 | [707. 设计链表](https://leetcode.cn/problems/design-linked-list/) // [203. 移除链表元素](https://leetcode.cn/problems/remove-linked-list-elements/) // [237. 删除链表中的节点](https://leetcode.cn/problems/delete-node-in-a-linked-list/) // [19. 删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) // [83. 删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/) // [82. 删除排序链表中的重复元素 II](https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/) |
| 链表的遍历         | [430. 扁平化多级双向链表](https://leetcode.cn/problems/flatten-a-multilevel-doubly-linked-list/) // [114. 二叉树展开为链表](https://leetcode.cn/problems/flatten-binary-tree-to-linked-list/) |
| 链表的旋转与反转   | [61. 旋转链表](https://leetcode.cn/problems/rotate-list/) // [24. 两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs/) // [206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/) // [92. 反转链表 II](https://leetcode.cn/problems/reverse-linked-list-ii/) // [25. K 个一组翻转链表](https://leetcode.cn/problems/reverse-nodes-in-k-group/) |
| 链表高精度加法     | [2. 两数相加](https://leetcode.cn/problems/add-two-numbers/) // [445. 两数相加 II](https://leetcode.cn/problems/add-two-numbers-ii/) // [面试题 02.05. 链表求和](https://leetcode.cn/problems/sum-lists-lcci/) |
| 链表的合并         | [21. 合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/) // [23. 合并K个升序链表](https://leetcode.cn/problems/merge-k-sorted-lists/) |
| 链表中的双指针技巧 | [86. 分隔链表](https://leetcode.cn/problems/partition-list/) // [19. 删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) // [141. 环形链表](https://leetcode.cn/problems/linked-list-cycle/) // [142. 环形链表 II](https://leetcode.cn/problems/linked-list-cycle-ii/) // [876. 链表的中间结点](https://leetcode.cn/problems/middle-of-the-linked-list/) // [143. 重排链表](https://leetcode.cn/problems/reorder-list/) // [160. 相交链表](https://leetcode.cn/problems/intersection-of-two-linked-lists/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[力扣刷题总结之链表](https://leetcode.cn/circle/article/YGr54o/) by [return up;](https://leetcode.cn/u/yfnupup/)

[一文搞定常见的链表问题](https://leetcode.cn/problems/linked-list-cycle/solution/yi-wen-gao-ding-chang-jian-de-lian-biao-wen-ti-h-2/) by [自在飞花](https://leetcode.cn/u/time-limit/)

[【反转链表】：双指针，递归，妖魔化的双指针](https://leetcode.cn/problems/reverse-linked-list/solution/fan-zhuan-lian-biao-shuang-zhi-zhen-di-gui-yao-mo-/) by [路漫漫我不畏](https://leetcode.cn/)

[《链表精讲》](https://leetcode.cn/leetbook/detail/lc-class-lian-biao/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 哈希表篇

| 题目分类                     | 题目编号                                                     |
| ---------------------------- | ------------------------------------------------------------ |
| **哈希表的查找、插入及删除** | [706. 设计哈希映射](https://leetcode.cn/problems/design-hashmap/) // [217. 存在重复元素](https://leetcode.cn/problems/contains-duplicate/) // [349. 两个数组的交集](https://leetcode.cn/problems/intersection-of-two-arrays/) // [128. 最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/) //[290. 单词规律](https://leetcode.cn/problems/word-pattern/) // [532. 数组中的 k-diff 数对](https://leetcode.cn/problems/k-diff-pairs-in-an-array/) // [205. 同构字符串](https://leetcode.cn/problems/isomorphic-strings/) // [138. 复制带随机指针的链表](https://leetcode.cn/problems/copy-list-with-random-pointer/) |
| **哈希表与索引**             | [1. 两数之和](https://leetcode.cn/problems/two-sum/) // [599. 两个列表的最小索引总和](https://leetcode.cn/problems/minimum-index-sum-of-two-lists/) // [219. 存在重复元素 II](https://leetcode.cn/problems/contains-duplicate-ii/) |
| **哈希表与统计**             | [594. 最长和谐子序列](https://leetcode.cn/problems/longest-harmonious-subsequence/) // [350. 两个数组的交集 II](https://leetcode.cn/problems/intersection-of-two-arrays-ii/) // [554. 砖墙](https://leetcode.cn/problems/brick-wall/) // [609. 在系统中查找重复文件](https://leetcode.cn/problems/find-duplicate-file-in-system/) // [454. 四数相加 II](https://leetcode.cn/problems/4sum-ii/) |
| **哈希表与前缀和**           | [560. 和为 K 的子数组](https://leetcode.cn/problems/subarray-sum-equals-k/) // [523. 连续的子数组和](https://leetcode.cn/problems/continuous-subarray-sum/) // [525. 连续数组](https://leetcode.cn/problems/contiguous-array/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[哈希表刷题笔记](https://leetcode.cn/circle/article/6dPZmy/) by [程序厨](https://leetcode.cn/u/chefyuan/)

[一文助你把哈希表整的明明白白](https://leetcode.cn/circle/article/S4rjk0/) by [AC 自动机](https://leetcode.cn/circle/article/6dPZmy/)

[哈希表图文学](https://leetcode.cn/leetbook/detail/hash-table-plus/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 栈与队列篇

| 题目分类             | 题目编号                                                     |
| -------------------- | ------------------------------------------------------------ |
| 栈的实现             | [232. 用栈实现队列](https://leetcode.cn/problems/implement-queue-using-stacks/) // [225. 用队列实现栈](https://leetcode.cn/problems/implement-stack-using-queues/)// [面试题 03.01. 三合一](https://leetcode.cn/problems/three-in-one-lcci/) // [1441. 用栈操作构建数组](https://leetcode.cn/problems/build-an-array-with-stack-operations/) |
| 单调栈               | [496. 下一个更大元素 I](https://leetcode.cn/problems/next-greater-element-i/) // [84. 柱状图中最大的矩形](https://leetcode.cn/problems/largest-rectangle-in-histogram/)// [9. 每日温度](https://leetcode.cn/problems/daily-temperatures/) // [901. 股票价格跨度](https://leetcode.cn/problems/online-stock-span/) // [42. 接雨水](https://leetcode.cn/problems/trapping-rain-water/) |
| 最小/大栈            | [面试题 03.02. 栈的最小值](https://leetcode.cn/problems/min-stack-lcci/) // [剑指 Offer 30. 包含min函数的栈](https://leetcode.cn/problems/bao-han-minhan-shu-de-zhan-lcof/) // [155. 最小栈](https://leetcode.cn/problems/min-stack/) // [716. 最大栈](https://leetcode.cn/problems/max-stack/) |
| 字符串去重问题       | [316.去除重复字母](https://leetcode.cn/problems/remove-duplicate-letters) // [1209. 删除字符串中的所有相邻重复项 II](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string-ii/) // [1081.不同字符的最小子序列](https://leetcode.cn/problems/smallest-subsequence-of-distinct-characters) |
| 栈与括号匹配         | [20. 有效的括号](https://leetcode.cn/problems/valid-parentheses/) // [636. 函数的独占时间](https://leetcode.cn/problems/exclusive-time-of-functions/) // [591. 标签验证器](https://leetcode.cn/problems/tag-validator/) // [32. 最长有效括号](https://leetcode.cn/problems/longest-valid-parentheses/) |
| 表达式求值           | [150. 逆波兰表达式求值](https://leetcode.cn/problems/evaluate-reverse-polish-notation/)//[224. 基本计算器](https://leetcode.cn/problems/basic-calculator/) //[227. 基本计算器 II](https://leetcode.cn/problems/basic-calculator-ii/) // [772. 基本计算器 III](https://leetcode.cn/problems/basic-calculator-iii/) // [770. 基本计算器 IV](https://leetcode.cn/problems/basic-calculator-iv/) |
| 用栈访问最后若干元素 | [682. 棒球比赛](https://leetcode.cn/problems/baseball-game/) // [71. 简化路径](https://leetcode.cn/problems/simplify-path/) // [388. 文件的最长绝对路径](https://leetcode.cn/problems/longest-absolute-file-path/) |
| 递归                 | [385. 迷你语法分析器](https://leetcode.cn/problems/mini-parser/) // [341. 扁平化嵌套列表迭代器](https://leetcode.cn/problems/flatten-nested-list-iterator/) // [394. 字符串解码](https://leetcode.cn/problems/decode-string/) |
| 滑动窗口最大值问题   | [239. 滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/) |
| 求前 K 个高频元素    | [347. 前K个高频元素](https://leetcode.cn/problems/top-k-frequent-elements/) // [692. 前K个高频单词](https://leetcode.cn/problems/top-k-frequent-words/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[分享｜2021秋招算法总结12-栈篇](https://leetcode.cn/circle/discuss/kdY0zV/) by [鲂](https://leetcode.cn/u/huan-shi-da-ai-xin-lan/)

[【柱状图中最大的矩形】单调栈入门，使用单调栈快速寻找边界](https://leetcode.cn/problems/largest-rectangle-in-histogram/solution/84-by-ikaruga/) by [Ikaruga](https://leetcode.cn/u/ikaruga/)

[C++ 利用哨兵👨‍✈️，维护一个单调栈📈(图解，直观掌握)](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/solution/c-li-yong-shao-bing-wei-hu-yi-ge-dan-diao-zhan-tu-/) by [文慕阳](https://leetcode.cn/u/wen-mu-yang/)

[《队列与栈精讲》](https://leetcode.cn/leetbook/detail/lc-class-queue-stack/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 字符串篇

| 题目分类           | 题目编号                                                     |
| ------------------ | ------------------------------------------------------------ |
| 字符               | [520. 检测大写字母](https://leetcode.cn/problems/detect-capital/) |
| 回文串的定义       | [125. 验证回文串](https://leetcode.cn/problems/valid-palindrome/) |
| 公共前缀           | [14. 最长公共前缀](https://leetcode.cn/problems/longest-common-prefix/) |
| 单词               | [434. 字符串中的单词数](https://leetcode.cn/problems/number-of-segments-in-a-string/) // [58. 最后一个单词的长度](https://leetcode.cn/problems/length-of-last-word/) |
| 字符串的反转       | [344. 反转字符串](https://leetcode.cn/problems/reverse-string/) // [541. 反转字符串 II](https://leetcode.cn/problems/reverse-string-ii/) // [557. 反转字符串中的单词 III](https://leetcode.cn/problems/reverse-words-in-a-string-iii/) // [151. 翻转字符串里的单词](https://leetcode.cn/problems/reverse-words-in-a-string/) |
| 字符的统计         | [387. 字符串中的第一个唯一字符](https://leetcode.cn/problems/first-unique-character-in-a-string/) // [389. 找不同](https://leetcode.cn/problems/find-the-difference/) // [383. 赎金信](https://leetcode.cn/problems/ransom-note/) // [242. 有效的字母异位词](https://leetcode.cn/problems/valid-anagram/) // [49. 字母异位词分组](https://leetcode.cn/problems/group-anagrams/) // [451. 根据字符出现频率排序](https://leetcode.cn/problems/sort-characters-by-frequency/) // [423. 从英文中重建数字](https://leetcode.cn/problems/reconstruct-original-digits-from-english/) // [657. 机器人能否返回原点](https://leetcode.cn/problems/robot-return-to-origin/) // [551. 学生出勤记录 I](https://leetcode.cn/problems/student-attendance-record-i/) // [696. 计数二进制子串](https://leetcode.cn/problems/count-binary-substrings/) // [467. 环绕字符串中唯一的子字符串](https://leetcode.cn/problems/unique-substrings-in-wraparound-string/) |
| 数字与字符串间转换 | [299. 猜数字游戏](https://leetcode.cn/problems/bulls-and-cows/) // [412. Fizz Buzz](https://leetcode.cn/problems/fizz-buzz/) // [506. 相对名次](https://leetcode.cn/problems/relative-ranks/) // [539. 最小时间差](https://leetcode.cn/problems/minimum-time-difference/) // [553. 最优除法](https://leetcode.cn/problems/optimal-division/) // [537. 复数乘法](https://leetcode.cn/problems/complex-number-multiplication/) // [592. 分数加减运算](https://leetcode.cn/problems/fraction-addition-and-subtraction/) // [640. 求解方程](https://leetcode.cn/problems/solve-the-equation/) // [38. 外观数列](https://leetcode.cn/problems/count-and-say/) // [443. 压缩字符串](https://leetcode.cn/problems/string-compression/) // [8. 字符串转换整数 (atoi)](https://leetcode.cn/problems/string-to-integer-atoi/) // [13. 罗马数字转整数](https://leetcode.cn/problems/roman-to-integer/) // [12. 整数转罗马数字](https://leetcode.cn/problems/integer-to-roman/) // [273. 整数转换英文表示](https://leetcode.cn/problems/integer-to-english-words/) // [165. 比较版本号](https://leetcode.cn/problems/compare-version-numbers/) // [481. 神奇字符串](https://leetcode.cn/problems/magical-string/) |
| 子序列             | [392. 判断子序列](https://leetcode.cn/problems/is-subsequence/) // [524. 通过删除字母匹配到字典里最长单词](https://leetcode.cn/problems/longest-word-in-dictionary-through-deleting/) // [521. 最长特殊序列 Ⅰ](https://leetcode.cn/problems/longest-uncommon-subsequence-i/) // [522. 最长特殊序列 II](https://leetcode.cn/problems/longest-uncommon-subsequence-ii/) |
| 高精度运算         | [66. 加一](https://leetcode.cn/problems/plus-one/submissions/) // [67. 二进制求和](https://leetcode.cn/problems/add-binary/) // [415. 字符串相加](https://leetcode.cn/problems/add-strings/) // [43. 字符串相乘](https://leetcode.cn/problems/multiply-strings/) // [306. 累加数](https://leetcode.cn/problems/additive-number/) |
| 字符串变换         | [482. 密钥格式化](https://leetcode.cn/problems/license-key-formatting/) // [6. Z 字形变换](https://leetcode.cn/problems/zigzag-conversion/) // [68. 文本左右对齐](https://leetcode.cn/problems/text-justification/) |
| 字符串匹配         | [28. 实现 strStr()](https://leetcode.cn/problems/implement-strstr/) // [686. 重复叠加字符串匹配](https://leetcode.cn/problems/repeated-string-match/) // [459. 重复的子字符串](https://leetcode.cn/problems/repeated-substring-pattern/) // [214. 最短回文串](https://leetcode.cn/problems/shortest-palindrome/submissions/) |
| 中心拓展法         | [5. 最长回文子串](https://leetcode.cn/problems/longest-palindromic-substring/) // [647. 回文子串](https://leetcode.cn/problems/palindromic-substrings/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[没有人一起从零开始刷力扣(二)——字符串篇](https://leetcode.cn/circle/article/gp2FyU/) by [noone_](https://leetcode.cn/u/noone_/)
[数组和字符串](https://leetcode.cn/leetbook/detail/array-and-string/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 数与位篇

| 题目分类 | 题目编号                                                     |
| -------- | ------------------------------------------------------------ |
| 进制转换 | [67. 二进制求和](https://leetcode.cn/problems/add-binary/) // [504. 七进制数](https://leetcode.cn/problems/base-7/) // [405. 数字转换为十六进制数](https://leetcode.cn/problems/convert-a-number-to-hexadecimal/) // [476. 数字的补数](https://leetcode.cn/problems/number-complement/) // [66. 加一](https://leetcode.cn/problems/plus-one/) // [479. 最大回文数乘积](https://leetcode.cn/problems/largest-palindrome-product/) // [564. 寻找最近的回文数](https://leetcode.cn/problems/find-the-closest-palindrome/) // [504. 七进制数](https://leetcode.cn/problems/base-7/) // [7. 整数反转](https://leetcode.cn/problems/reverse-integer/) // [693. 交替位二进制数](https://leetcode.cn/problems/binary-number-with-alternating-bits/) |
| 数值计算 | [415. 字符串相加](https://leetcode.cn/problems/add-strings/) // [43. 字符串相乘](https://leetcode.cn/problems/multiply-strings/) // [556. 下一个更大元素 III](https://leetcode.cn/problems/next-greater-element-iii/) // [9. 回文数](https://leetcode.cn/problems/palindrome-number/) // [258. 各位相加](https://leetcode.cn/problems/add-digits/) // [461. 汉明距离](https://leetcode.cn/problems/hamming-distance/) // [477. 汉明距离总和](https://leetcode.cn/problems/total-hamming-distance/) |
| 数学问题 | [204. 计数质数](https://leetcode.cn/problems/count-primes/) // [263. 丑数](https://leetcode.cn/problems/ugly-number/solution/) // [367. 有效的完全平方数](https://leetcode.cn/problems/valid-perfect-square/) // [1071. 字符串的最大公因子](https://leetcode.cn/problems/greatest-common-divisor-of-strings/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[没有人一起从零开始刷力扣（三）- 数与位篇](https://leetcode.cn/circle/article/g5LLfN/) by [noone_](https://leetcode.cn/u/noone_/)

## 递归篇

| 题目分类         | 题目编号                                                     |
| ---------------- | ------------------------------------------------------------ |
| 二叉树相关问题   | [100. 相同的树](https://leetcode.cn/problems/same-tree/) // [226. 翻转二叉树](https://leetcode.cn/problems/invert-binary-tree/) // [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) // [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) // [617. 合并二叉树](https://leetcode.cn/problems/merge-two-binary-trees/) // [572. 另一棵树的子树](https://leetcode.cn/problems/subtree-of-another-tree/) // [965. 单值二叉树](https://leetcode.cn/problems/univalued-binary-tree/) // [101. 对称二叉树](https://leetcode.cn/problems/symmetric-tree/) // [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) |
| 回溯相关问题     | [51. N 皇后](https://leetcode.cn/problems/n-queens/) // [37. 解数独](https://leetcode.cn/problems/sudoku-solver/) // [39. 组合总和](https://leetcode.cn/problems/combination-sum/) // [46. 全排列](https://leetcode.cn/problems/permutations/) // [79. 单词搜索](https://leetcode.cn/problems/word-search/) |
| 动态规划相关问题 | [509. 斐波那契数](https://leetcode.cn/problems/fibonacci-number/) // [70. 爬楼梯](https://leetcode.cn/problems/climbing-stairs/) // [53. 最大子数组和](https://leetcode.cn/problems/maximum-subarray/) // [198. 打家劫舍](https://leetcode.cn/problems/house-robber/) // [300. 最长递增子序列](https://leetcode.cn/problems/longest-increasing-subsequence/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[一看就会，一写就废？详解递归](https://leetcode.cn/problems/merge-two-sorted-lists/solution/yi-kan-jiu-hui-yi-xie-jiu-fei-xiang-jie-di-gui-by-/) by [腐烂的橘子](https://leetcode.cn/u/z1m/)
[一篇文章带你吃透对称性递归(思路分析+解题模板+案例解读)](https://leetcode.cn/problems/shu-de-zi-jie-gou-lcof/solution/yi-pian-wen-zhang-dai-ni-chi-tou-dui-che-uhgs/) by [星晴pro](https://leetcode.cn/u/eh-xing-qing/)
[递归和分治图文学](https://leetcode.cn/leetbook/detail/recursion-and-divide-and-conquer/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 分治篇

| 题目分类   | 题目编号                                                     |
| ---------- | ------------------------------------------------------------ |
| 分解问题   | [169. 多数元素](https://leetcode.cn/problems/majority-element/) // [4. 寻找两个正序数组的中位数](https://leetcode.cn/problems/median-of-two-sorted-arrays/) // [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) |
| 解决子问题 | [69. x 的平方根 ](https://leetcode.cn/problems/sqrtx/)// [53. 最大子数组和](https://leetcode.cn/problems/maximum-subarray/) // [34. 在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/) |
| 合并结果   | [23. 合并 K 个升序链表](https://leetcode.cn/problems/merge-k-sorted-lists/) // [1277. 统计全为 1 的正方形子矩阵](https://leetcode.cn/problems/count-square-submatrices-with-all-ones/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[递归和分治图文学](https://leetcode.cn/leetbook/detail/recursion-and-divide-and-conquer/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 贪心篇

| 题目分类 | 题目编号                                                     |
| -------- | ------------------------------------------------------------ |
| 区间类   | [435. 无重叠区间](https://leetcode.cn/problems/non-overlapping-intervals/) // [452. 用最少数量的箭引爆气球](https://leetcode.cn/problems/minimum-number-of-arrows-to-burst-balloons/) // [763. 划分字母区间](https://leetcode.cn/problems/partition-labels/) // [1353. 最多可以参加的会议数目](https://leetcode.cn/problems/maximum-number-of-events-that-can-be-attended/) // [1520. 最多的不重叠子字符串](https://leetcode.cn/problems/maximum-number-of-non-overlapping-substrings/) // [738. 单调递增的数字](https://leetcode.cn/problems/monotone-increasing-digits/) |
| 峰谷类   | [122. 买卖股票的最佳时机 II](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/) // [714. 买卖股票的最佳时机含手续费](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) // [376. 摆动序列](https://leetcode.cn/problems/wiggle-subsequence/) // [135. 分发糖果](https://leetcode.cn/problems/candy/) |
| 钱币类   | [322. 零钱兑换](https://leetcode.cn/problems/coin-change/) // [860. 柠檬水找零](https://leetcode.cn/problems/lemonade-change/) // [1342. 将数字变成 0 的操作次数](https://leetcode.cn/problems/number-of-steps-to-reduce-a-number-to-zero/) |
| 任务类   | [621. 任务调度器](https://leetcode.cn/problems/task-scheduler/) // [1705. 吃苹果的最大数目](https://leetcode.cn/problems/maximum-number-of-eaten-apples/) |
| 矩形类   | [1630. 等差子数组](https://leetcode.cn/problems/arithmetic-subarrays/) // [870. 优势洗牌](https://leetcode.cn/problems/advantage-shuffle/) // [1262. 可被三整除的最大和](https://leetcode.cn/problems/greatest-sum-divisible-by-three/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[贪心问题汇总](https://leetcode.cn/circle/article/YPuyhz/) by [FennelDumplings](https://leetcode.cn/u/feeenedumplings/)
[贪心题型总结](https://leetcode.cn/circle/article/C57HHZ/) by [AC 自动机](https://leetcode.cn/u/edte/)
[贪心算法（Java）](https://leetcode.cn/problems/integer-to-roman/solution/tan-xin-suan-fa-by-liweiwei1419/) by [liweiwei1419](https://leetcode.cn/u/liweiwei1419/)
[贪心算法精讲](https://leetcode.cn/leetbook/detail/lc-class-greedy/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 排序算法篇

| 题目分类 | 题目编号                                                     |
| -------- | ------------------------------------------------------------ |
| 冒泡排序 | [912. 排序数组](https://leetcode.cn/problems/sort-an-array/) |
| 选择排序 | [215. 数组中的第K个最大元素](https://leetcode.cn/problems/kth-largest-element-in-an-array/) |
| 插入排序 | [147. 对链表进行插入排序](https://leetcode.cn/problems/insertion-sort-list/) |
| 快速排序 | [973. 最接近原点的 K 个点](https://leetcode.cn/problems/k-closest-points-to-origin/) |
| 归并排序 | [23. 合并 K 个升序链表](https://leetcode.cn/problems/merge-k-sorted-lists/) |
| 堆排序   | [347. 前 K 个高频元素](https://leetcode.cn/problems/top-k-frequent-elements/) |
| 桶排序   | [1648. 销售价值减少的颜色球](https://leetcode.cn/problems/sell-diminishing-valued-colored-balls/) // [220. 存在重复元素 III](https://leetcode.cn/problems/contains-duplicate-iii/) |
| 计数排序 | [75. 颜色分类](https://leetcode.cn/problems/sort-colors/)    |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[排序算法图文学](https://leetcode.cn/leetbook/detail/sort-algorithms/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 字符串算法篇

| 题目分类           | 题目编号                                                     |
| ------------------ | ------------------------------------------------------------ |
| 字符串匹配算法     | **Rabin-Karp 算法：** [28. 找出字符串中第一个匹配项的下标](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/) // **KMP 算法:** [214. 最短回文串](https://leetcode.cn/problems/shortest-palindrome/) // **Boyer-Moore 算法：** [819. 最常见的单词](https://leetcode.cn/problems/most-common-word/) |
| 字符串排序算法     | [75. 颜色分类](https://leetcode.cn/problems/sort-colors/) // [451. 根据字符出现频率排序](https://leetcode.cn/problems/sort-characters-by-frequency/) // [179. 最大数](https://leetcode.cn/problems/largest-number/) // [937. 重新排列日志文件](https://leetcode.cn/problems/reorder-data-in-log-files/) |
| 字符串压缩算法     | **Run-Length 编码**：[443. 压缩字符串](https://leetcode.cn/problems/string-compression/) // **哈夫曼编码：**[297. 二叉树的序列化与反序列化](https://leetcode.cn/problems/serialize-and-deserialize-binary-tree/) |
| 字符串搜索算法     | [17. 电话号码的字母组合](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/) // [22. 括号生成](https://leetcode.cn/problems/generate-parentheses/) // [30. 串联所有单词的子串](https://leetcode.cn/problems/substring-with-concatenation-of-all-words/) |
| 字符串编辑距离算法 | [583. 两个字符串的删除操作](https://leetcode.cn/problems/delete-operation-for-two-strings/) // [1143. 最长公共子序列](https://leetcode.cn/problems/longest-common-subsequence/) |
| 正则表达式         | [10. 正则表达式匹配](https://leetcode.cn/problems/regular-expression-matching/) // [65. 有效数字](https://leetcode.cn/problems/valid-number/) |
| 暴力算法           | [14. 最长公共前缀](https://leetcode.cn/problems/longest-common-prefix/) // [125. 验证回文串](https://leetcode.cn/problems/valid-palindrome/) // [344. 反转字符串](https://leetcode.cn/problems/reverse-string/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

## 树与二叉树篇

注：对二叉树进行遍历时，除了使用递归的方法以外，建议尝试使用非递归的方法。面试常考，并且能加深自己对知识点的理解。

| 题目分类           | 题目编号                                                     |
| ------------------ | ------------------------------------------------------------ |
| 二叉树的遍历       | [144. 二叉树的前序遍历](https://leetcode.cn/problems/binary-tree-preorder-traversal/) // [94. 二叉树的中序遍历](https://leetcode.cn/problems/binary-tree-inorder-traversal/) // [145. 二叉树的后序遍历](https://leetcode.cn/problems/binary-tree-postorder-traversal/) // [102. 二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/) // [103. 二叉树的锯齿形层序遍历](https://leetcode.cn/problems/binary-tree-zigzag-level-order-traversal/) |
| 二叉树的构造与修改 | [105. 从前序与中序遍历序列构造二叉树](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) // [106. 从中序与后序遍历序列构造二叉树](https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) // [889. 根据前序和后序遍历构造二叉树](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) // [226. 翻转二叉树](https://leetcode.cn/problems/invert-binary-tree/) // [617. 合并二叉树](https://leetcode.cn/problems/merge-two-binary-trees/) |
| 二叉树的搜索问题   | **用DFS或BFS均可解决的问题：** [513. 找树左下角的值](https://leetcode.cn/problems/find-bottom-left-tree-value/) // [515. 在每个树行中找最大值](https://leetcode.cn/problems/find-largest-value-in-each-tree-row/) // [623. 在二叉树中增加一行](https://leetcode.cn/problems/add-one-row-to-tree/) // **只能用DFS解决的问题：** [199. 二叉树的右视图](https://leetcode.cn/problems/binary-tree-right-side-view/) // **需要两次搜索才能解决的问题：** [655. 输出二叉树](https://leetcode.cn/problems/print-binary-tree/) // [865. 具有所有最深节点的最小子树](https://leetcode.cn/problems/smallest-subtree-with-all-the-deepest-nodes/) // [834. 树中距离之和](https://leetcode.cn/problems/sum-of-distances-in-tree/) // [1339. 分裂二叉树的最大乘积](https://leetcode.cn/problems/maximum-product-of-splitted-binary-tree/) // [863. 二叉树中所有距离为 K 的结点](https://leetcode.cn/problems/all-nodes-distance-k-in-binary-tree/) //[101. 对称二叉树](https://leetcode.cn/problems/symmetric-tree/) // [222. 完全二叉树的节点个数](https://leetcode.cn/problems/count-complete-tree-nodes/) // [404. 左叶子之和](https://leetcode.cn/problems/sum-of-left-leaves/) // [513. 找树左下角的值](https://leetcode.cn/problems/find-bottom-left-tree-value/) |
| 二叉树的路径问题   | **自顶向下路径问题：**[257. 二叉树的所有路径](https://leetcode.cn/problems/binary-tree-paths/) // [面试题04.12.求和路径](https://leetcode.cn/problems/paths-with-sum-lcci/) // [112.路径总和](https://leetcode.cn/problems/path-sum/) // [437. 路径总和 III](https://leetcode.cn/problems/path-sum-iii/) // [988. 从叶结点开始的最小字符串](https://leetcode.cn/problems/smallest-string-starting-from-leaf/) // **非自顶向下路径问题：**[124. 二叉树中的最大路径和](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) // [687. 最长同值路径](https://leetcode.cn/problems/longest-univalue-path/) // [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) |
| 二叉树属性问题     | [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) // [111. 二叉树的最小深度](https://leetcode.cn/problems/minimum-depth-of-binary-tree/) // [222. 完全二叉树的节点个数](https://leetcode.cn/problems/count-complete-tree-nodes/) // [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) |
| 二叉树公共祖先问题 | [235. 二叉搜索树的最近公共祖先](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-search-tree/) // [1483. 树节点的第 K 个祖先](https://leetcode.cn/problems/kth-ancestor-of-a-tree-node/) |
| 二叉搜索树         | [98.验证二叉搜索树](https://leetcode.cn/problems/validate-binary-search-tree/) // [173. 二叉搜索树迭代器](https://leetcode.cn/problems/binary-search-tree-iterator/) // [701. 二叉搜索树中的插入操作](https://leetcode.cn/problems/insert-into-a-binary-search-tree/) // [669. 修剪二叉搜索树](https://leetcode.cn/problems/trim-a-binary-search-tree/) // [450. 删除二叉搜索树中的节点](https://leetcode.cn/problems/delete-node-in-a-bst/) // [230. 二叉搜索树中第K小的元素](https://leetcode.cn/problems/kth-smallest-element-in-a-bst/) // [235. 二叉搜索树的最近公共祖先](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-search-tree/) //[108. 将有序数组转换为二叉搜索树](https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/) // [783. 二叉搜索树节点最小距离](https://leetcode.cn/problems/minimum-distance-between-bst-nodes/) // [538. 把二叉搜索树转换为累加树](https://leetcode.cn/problems/convert-bst-to-greater-tree/) // [1038. 从二叉搜索树到更大和树](https://leetcode.cn/problems/binary-search-tree-to-greater-sum-tree/) |
| 平衡二叉树         | [110. 平衡二叉树](https://leetcode.cn/problems/balanced-binary-tree/) // [109. 有序链表转换二叉搜索树](https://leetcode.cn/problems/convert-sorted-list-to-binary-search-tree/) // [1382. 将二叉搜索树变平衡](https://leetcode.cn/problems/balance-a-binary-search-tree/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[二叉树的遍历(深度优先/广度优先 递归/非递归 层序遍历)详解](https://leetcode.cn/circle/article/n5OSGO/) by[
bitkevin](https://leetcode.cn/u/bitkevin/)
[史上最全遍历二叉树详解](https://leetcode.cn/problems/binary-tree-preorder-traversal/solution/leetcodesuan-fa-xiu-lian-dong-hua-yan-shi-xbian-2/) by [golandscape](https://leetcode.cn/u/golandscape/)
[一篇文章解决所有二叉树路径问题（问题分析+分类模板+题目剖析）](https://leetcode.cn/problems/longest-univalue-path/solution/yi-pian-wen-zhang-jie-jue-suo-you-er-cha-94j7/) by [星晴pro](https://leetcode.cn/u/eh-xing-qing/)
[匹配类二叉树题目总结](https://leetcode.cn/problems/shu-de-zi-jie-gou-lcof/solution/pi-pei-lei-er-cha-shu-ti-mu-zong-jie-by-z1m/) by [腐烂的橘子](https://leetcode.cn/u/z1m/)
[红黑树杀人事件始末](https://leetcode.cn/circle/article/nsG69E/) by [公众号_码海](https://leetcode.cn/u/zi-fei-yu-106/)
[二叉查找树 (树ADT连载 3/13)](https://leetcode.cn/circle/discuss/wPzlSb/) by [yukiyama](https://leetcode.cn/u/yukiyama/)
[AVL树 (树ADT连载 4/13)](https://leetcode.cn/circle/discuss/zbwD3p/) by [yukiyama](https://leetcode.cn/u/yukiyama/)
[splay树 (树ADT连载 5/13)](https://leetcode.cn/circle/discuss/BCK17f/) by [yukiyama](https://leetcode.cn/u/yukiyama/)
[红黑树从入门到看开](https://leetcode.cn/circle/discuss/SwgIJV/) by [yukiyama](https://leetcode.cn/u/yukiyama/)
[树状数组从入门到下车](https://leetcode.cn/circle/discuss/qGREiN/) by [yukiyama](https://leetcode.cn/u/yukiyama/)
[线段树从入门到急停](https://leetcode.cn/circle/discuss/H4aMOn/) by [yukiyama](https://leetcode.cn/u/yukiyama/)

[普通树](https://leetcode.cn/leetbook/detail/pu-tong-shu/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[二叉搜索树](https://leetcode.cn/leetbook/detail/introduction-to-data-structure-binary-search-tree/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[N 叉树](https://leetcode.cn/leetbook/detail/n-ary-tree/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 动态规划篇

| 题目分类     | 题目编号                                                     |
| ------------ | ------------------------------------------------------------ |
| 01背包问题   | [416. 分割等和子集](https://leetcode.cn/problems/partition-equal-subset-sum/) // [474. 一和零](https://leetcode.cn/problems/ones-and-zeroes/) // [494. 目标和](https://leetcode.cn/problems/target-sum/) // [1049. 最后一块石头的重量 II](https://leetcode.cn/problems/last-stone-weight-ii/) // [805. 数组的均值分割](https://leetcode.cn/problems/split-array-with-same-average/) |
| 完全背包问题 | [139. 单词拆分](https://leetcode.cn/problems/word-break/) // [279. 完全平方数](https://leetcode.cn/problems/perfect-squares/) // [322. 零钱兑换](https://leetcode.cn/problems/coin-change/) // [377. 组合总和 Ⅳ](https://leetcode.cn/problems/combination-sum-iv/) // [518. 零钱兑换 II](https://leetcode.cn/problems/coin-change-ii/) |
| 一维DP       | [32. 最长有效括号](https://leetcode.cn/problems/longest-valid-parentheses/) // [70. 爬楼梯](https://leetcode.cn/problems/climbing-stairs/) // [120. 三角形最小路径和](https://leetcode.cn/problems/triangle/) // [91. 解码方法](https://leetcode.cn/problems/decode-ways/) // [131. 分割回文串](https://leetcode.cn/problems/palindrome-partitioning/) // [132. 分割回文串 II](https://leetcode.cn/problems/palindrome-partitioning-ii/) // [121. 买卖股票的最佳时机](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/) |
| 二维DP       | [5. 最长回文子串](https://leetcode.cn/problems/longest-palindromic-substring/) // [97. 交错字符串](https://leetcode.cn/problems/interleaving-string/) // [62. 不同路径](https://leetcode.cn/problems/unique-paths/) // [64. 最小路径和](https://leetcode.cn/problems/minimum-path-sum/) // [72. 编辑距离](https://leetcode.cn/problems/edit-distance/) // [115. 不同的子序列](https://leetcode.cn/problems/distinct-subsequences/) |
| 三维DP       | [87. 扰乱字符串](https://leetcode.cn/problems/scramble-string/) |
| 线性DP       | [10. 正则表达式匹配](https://leetcode.cn/problems/regular-expression-matching/) // [44. 通配符匹配](https://leetcode.cn/problems/wildcard-matching/) // [53. 最大子数组和](https://leetcode.cn/problems/maximum-subarray/) // [72. 编辑距离](https://leetcode.cn/problems/edit-distance/) // [120. 三角形最小路径和](https://leetcode.cn/problems/triangle/) // [121. 买卖股票的最佳时机](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/) // [122. 买卖股票的最佳时机 II](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/) // [123. 买卖股票的最佳时机 III](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iii/) // [128. 最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/) // [152. 乘积最大子数组](https://leetcode.cn/problems/maximum-product-subarray/) // [198. 打家劫舍](https://leetcode.cn/problems/house-robber/) // [213. 打家劫舍 II](https://leetcode.cn/problems/house-robber-ii/) // [300. 最长递增子序列](https://leetcode.cn/problems/longest-increasing-subsequence/) // [319. 灯泡开关](https://leetcode.cn/problems/bulb-switcher/) // [354. 俄罗斯套娃信封问题](https://leetcode.cn/problems/russian-doll-envelopes/) // [714. 买卖股票的最佳时机含手续费](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) // [887. 鸡蛋掉落](https://leetcode.cn/problems/super-egg-drop/) // [1143. 最长公共子序列](https://leetcode.cn/problems/longest-common-subsequence/) // [940. 不同的子序列 II](https://leetcode.cn/problems/distinct-subsequences-ii/) // [1092. 最短公共超序列](https://leetcode.cn/problems/shortest-common-supersequence/) // [1463. 摘樱桃 II](https://leetcode.cn/problems/cherry-pickup-ii/) // [1696. 跳跃游戏 VI](https://leetcode.cn/problems/jump-game-vi/) |
| 区间DP       | [312. 戳气球](https://leetcode.cn/problems/burst-balloons/) // [516. 最长回文子序列](https://leetcode.cn/problems/longest-palindromic-subsequence/) // [664. 奇怪的打印机](https://leetcode.cn/problems/strange-printer/) // [730. 统计不同回文子序列](https://leetcode.cn/problems/count-different-palindromic-subsequences/) [1039. 多边形三角剖分的最低得分](https://leetcode.cn/problems/minimum-score-triangulation-of-polygon/) // [813. 最大平均值和的分组](https://leetcode.cn/problems/largest-sum-of-averages/) // [1278. 分割回文串](https://leetcode.cn/problems/palindrome-partitioning-iii/) |
| 树形DP       | [124. 二叉树中的最大路径和](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) // [337. 打家劫舍 III](https://leetcode.cn/problems/house-robber-iii/) // [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) |
| 数位DP       | [233. 数字 1 的个数](https://leetcode.cn/problems/number-of-digit-one/) // [902. 最大为 N 的数字组合](https://leetcode.cn/problems/numbers-at-most-n-given-digit-set/) // [1015. 可被 K 整除的最小整数](https://leetcode.cn/problems/smallest-integer-divisible-by-k/) // [600. 不含连续1的非负整数](https://leetcode.cn/problems/non-negative-integers-without-consecutive-ones/) // [1012. 至少有 1 位重复的数字](https://leetcode.cn/problems/numbers-with-repeated-digits/) |
| 状态压缩DP   | [464. 我能赢吗](https://leetcode.cn/problems/can-i-win/) // [526. 优美的排列](https://leetcode.cn/problems/beautiful-arrangement/) // [935. 骑士拨号器](https://leetcode.cn/problems/knight-dialer/) // [1349. 参加考试的最大学生数](https://leetcode.cn/problems/maximum-students-taking-exam/) // [1986. 完成任务的最少工作时间段](https://leetcode.cn/problems/minimum-number-of-work-sessions-to-finish-the-tasks/) |
| 计数型DP     | [62. 不同路径](https://leetcode.cn/problems/unique-paths/) // [63. 不同路径 II](https://leetcode.cn/problems/unique-paths-ii/) // [96. 不同的二叉搜索树](https://leetcode.cn/problems/unique-binary-search-trees/) |
| 递推型DP     | [70. 爬楼梯](https://leetcode.cn/problems/climbing-stairs/) // [509. 斐波那契数](https://leetcode.cn/problems/fibonacci-number/) // [935. 骑士拨号器](https://leetcode.cn/problems/knight-dialer/) // [957. N天后的牢房](https://leetcode.cn/problems/prison-cells-after-n-days/) // [1137. 第 N 个泰波那契数](https://leetcode.cn/problems/n-th-tribonacci-number/) |
| 概率型DP     | [808. 分汤](https://leetcode.cn/problems/soup-servings/) // [837. 新 21 点](https://leetcode.cn/problems/new-21-game/) |
| 博弈型DP     | [292. Nim游戏](https://leetcode.cn/problems/nim-game/) // [794. 有效的井字游戏](https://leetcode.cn/problems/valid-tic-tac-toe-state/) // [877. 石子游戏](https://leetcode.cn/problems/stone-game/) // [1140. 石子游戏 II](https://leetcode.cn/problems/stone-game-ii/) // [1275. 找出井字棋的获胜者](https://leetcode.cn/problems/find-winner-on-a-tic-tac-toe-game/) // [1690. 石子游戏 VII](https://leetcode.cn/problems/stone-game-vii/) |
| 乘法原理     | [分隔长廊的方案数](https://leetcode.cn/problems/number-of-ways-to-divide-a-long-corridor/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[一文学会动态规划解题技巧](https://leetcode.cn/circle/article/lxC3ZB/) by [公众号_码海](https://leetcode.cn/u/zi-fei-yu-106/)
[一篇文章吃透背包问题！（细致引入+解题模板+例题分析+代码呈现）](https://leetcode.cn/problems/last-stone-weight-ii/solution/yi-pian-wen-zhang-chi-tou-bei-bao-wen-ti-5lfv/) by [星晴pro](https://leetcode.cn/u/eh-xing-qing/)
[分享｜深度讲解背包问题：面试中每五道动态规划就有一道是背包模型 ...](https://leetcode.cn/circle/discuss/GWpXCM/) by [宫水三叶](https://leetcode.cn/u/ac_oier/)
[动态规划基础模型精讲](https://leetcode.cn/leetbook/detail/lc-class-dynamic-programming-basic/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[动态规划背包问题精讲](https://leetcode.cn/leetbook/detail/lc-class-knapsack-problem/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[动态规划图文学：线性 & 区间动态](https://leetcode.cn/leetbook/detail/dynamic-programming-1-plus/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[动态规划图文学：状压、计数 & 数位动态](https://leetcode.cn/leetbook/detail/dynamic-programming-2-plus/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)
[动态规划图文学: 树形、图上、概率 & 博弈动态](https://leetcode.cn/leetbook/detail/dynamic-programming-3-plus/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 图篇

| 题目分类            | 题目编号                                                     |
| ------------------- | ------------------------------------------------------------ |
| 图的表示            | [329. 矩阵中的最长递增路径](https://leetcode.cn/problems/longest-increasing-path-in-a-matrix/) // [1579.保证图可完全遍历](https://leetcode.cn/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/) // [210. 课程表 II](https://leetcode.cn/problems/course-schedule-ii/) // [980. 不同路径](https://leetcode.cn/problems/unique-paths-iii/) // [1128. 等价多米诺骨牌对的数量](https://leetcode.cn/problems/number-of-equivalent-domino-pairs/) // [133. 克隆图](https://leetcode.cn/problems/clone-graph/) // [1743. 从相邻元素对还原数组](https://leetcode.cn/problems/restore-the-array-from-adjacent-pairs/) |
| 广度优先搜索（BFS） | [127. 单词接龙](https://leetcode.cn/problems/word-ladder/) // [126. 单词接龙 II](https://leetcode.cn/problems/word-ladder-ii/) // [207. 课程表](https://leetcode.cn/problems/course-schedule/) // [210. 课程表 II ](https://leetcode.cn/problems/course-schedule-ii/)// [113. 路径总和 II](https://leetcode.cn/problems/path-sum-ii/) // [542. 01 矩阵](https://leetcode.cn/problems/01-matrix/) // [200. 岛屿数量](https://leetcode.cn/problems/number-of-islands/) // [117. 填充每个节点的下一个右侧节点指针 II](https://leetcode.cn/problems/populating-next-right-pointers-in-each-node-ii/) // [130. 被围绕的区域](https://leetcode.cn/problems/surrounded-regions/) // [1091. 二进制矩阵中的最短路径](https://leetcode.cn/problems/shortest-path-in-binary-matrix/) // [752. 打开转盘锁](https://leetcode.cn/problems/open-the-lock/) // [733. 图像渲染](https://leetcode.cn/problems/flood-fill/) // [102. 二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/) // [429. N 叉树的层序遍历](https://leetcode.cn/problems/n-ary-tree-level-order-traversal/) |
| 深度优先搜索（DFS） | [130. 被围绕的区域](https://leetcode.cn/problems/surrounded-regions/) // [417. 太平洋大西洋水流问题](https://leetcode.cn/problems/pacific-atlantic-water-flow/) // [200. 岛屿数量](https://leetcode.cn/problems/number-of-islands/) // [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) // [463. 岛屿的周长](https://leetcode.cn/problems/island-perimeter/) // [695. 岛屿的最大面积](https://leetcode.cn/problems/max-area-of-island/) // [827. 最大人工岛](https://leetcode.cn/problems/making-a-large-island/) // [1219. 黄金矿工](https://leetcode.cn/problems/path-with-maximum-gold/) // [690. 员工的重要性](https://leetcode.cn/problems/employee-importance/) // [113. 路径总和 II](https://leetcode.cn/problems/path-sum-ii/) // [226. 翻转二叉树](https://leetcode.cn/problems/invert-binary-tree/) // [129. 求根节点到叶节点数字之和](https://leetcode.cn/problems/sum-root-to-leaf-numbers/) |
| 最小生成树问题      | [1584. 连接所有点的最小费用](https://leetcode.cn/problems/min-cost-to-connect-all-points/) // [1131. 绝对值表达式的最大值](https://leetcode.cn/problems/maximum-of-absolute-value-expression/) // [1631. 最小体力消耗路径](https://leetcode.cn/problems/path-with-minimum-effort/) // [1489. 找到最小生成树里的关键边和伪关键边](https://leetcode.cn/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 最短路径问题        | [743. 网络延迟时间](https://leetcode.cn/problems/network-delay-time/) // [127. 单词接龙](https://leetcode.cn/problems/word-ladder/) // [787. K 站中转内最便宜的航班](https://leetcode.cn/problems/cheapest-flights-within-k-stops/)// [994. 腐烂的橘子](https://leetcode.cn/problems/rotting-oranges/) // [882. 细分图中的可到达节点](https://leetcode.cn/problems/reachable-nodes-in-subdivided-graph/) // [1030. 距离顺序排列矩阵单元格](https://leetcode.cn/problems/matrix-cells-in-distance-order/) // [1162. 地图分析](https://leetcode.cn/problems/as-far-from-land-as-possible/) // [1631. 最小体力消耗路径](https://leetcode.cn/problems/path-with-minimum-effort/) |
| 图的连通性          | [785. 判断二分图](https://leetcode.cn/problems/is-graph-bipartite/) // [面试题 04.01. 节点间通路](https://leetcode.cn/problems/route-between-nodes-lcci/solution/) // [547. 省份数量](https://leetcode.cn/problems/number-of-provinces/) // [886. 可能的二分法](https://leetcode.cn/problems/possible-bipartition/) // [959. 由斜杠划分区域](https://leetcode.cn/problems/regions-cut-by-slashes/) // [990. 等式方程的可满足性](https://leetcode.cn/problems/satisfiability-of-equality-equations/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

## 滑动窗口专题

| 题目分类                     | 题目编号                                                     |
| ---------------------------- | ------------------------------------------------------------ |
| 固定窗口大小的滑动窗口问题   | [76. 最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring/) // [3. 无重复字符的最长子串](https://leetcode.cn/problems/longest-substring-without-repeating-characters/) // [567. 字符串的排列](https://leetcode.cn/problems/permutation-in-string/) // [438. 找到字符串中所有字母异位词](https://leetcode.cn/problems/find-all-anagrams-in-a-string/) // [1763. 最长的美好子字符串](https://leetcode.cn/problems/longest-nice-substring/) // [446. 等差数列划分 II - 子序列](https://leetcode.cn/problems/arithmetic-slices-ii-subsequence/) // [718. 最长重复子数组](https://leetcode.cn/problems/maximum-length-of-repeated-subarray/) // [239. 滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/) // [480. 滑动窗口中位数](https://leetcode.cn/problems/sliding-window-median/) // [128. 最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/) // [346. 数据流中的移动平均值](https://leetcode.cn/problems/moving-average-from-data-stream/) |
| 不固定窗口大小的滑动窗口问题 | [209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/) // [674. 最长连续递增序列](https://leetcode.cn/problems/longest-continuous-increasing-subsequence/) // [943. 最短超级串](https://leetcode.cn/problems/find-the-shortest-superstring/) // [904. 水果成篮](https://leetcode.cn/problems/fruit-into-baskets/) // [632. 最小区间](https://leetcode.cn/problems/smallest-range-covering-elements-from-k-lists/) // [560. 和为 K 的子数组](https://leetcode.cn/problems/subarray-sum-equals-k/) // [395. 至少有 K 个重复字符的最长子串](https://leetcode.cn/problems/longest-substring-with-at-least-k-repeating-characters/) // [862. 和至少为 K 的最短子数组](https://leetcode.cn/problems/shortest-subarray-with-sum-at-least-k/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[滑动窗口](https://leetcode.cn/problems/longest-substring-without-repeating-characters/solution/hua-dong-chuang-kou-by-powcai/) by [powcai](https://leetcode.cn/u/powcai/)
[滑动窗口和双指针](https://leetcode.cn/leetbook/detail/sliding-window-and-two-pointers/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 二分查找专题

| 题目分类     | 题目编号                                                     |
| ------------ | ------------------------------------------------------------ |
| 普通二分查找 | [704. 二分查找](https://leetcode.cn/problems/binary-search/) // [69. x 的平方根 ](https://leetcode.cn/problems/sqrtx/)// [35. 搜索插入位置](https://leetcode.cn/problems/search-insert-position/) // [153. 寻找旋转排序数组中的最小值](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/) // [367. 有效的完全平方数](https://leetcode.cn/problems/valid-perfect-square/) // [50. Pow(x, n)](https://leetcode.cn/problems/powx-n/) // [278. 第一个错误的版本](https://leetcode.cn/problems/first-bad-version/) // [4. 寻找两个正序数组的中位数](https://leetcode.cn/problems/median-of-two-sorted-arrays/) // [167. 两数之和 II - 输入有序数组](https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/) // [744. 寻找比目标字母大的最小字母](https://leetcode.cn/problems/find-smallest-letter-greater-than-target/) // [162. 寻找峰值](https://leetcode.cn/problems/find-peak-element/) |
| 查找区间     | [34. 在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/) // [658. 找到 K 个最接近的元素](https://leetcode.cn/problems/find-k-closest-elements/) // [278. 第一个错误的版本](https://leetcode.cn/problems/first-bad-version/) // [74. 搜索二维矩阵](https://leetcode.cn/problems/search-a-2d-matrix/) |
| 旋转排列数组 | [33. 搜索旋转排序数组](https://leetcode.cn/problems/search-in-rotated-sorted-array/) // [81. 搜索旋转排序数组 II](https://leetcode.cn/problems/search-in-rotated-sorted-array-ii/) // [240. 搜索二维矩阵 II](https://leetcode.cn/problems/search-a-2d-matrix-ii/) // [48. 旋转图像](https://leetcode.cn/problems/rotate-image/) // [448. 找到所有数组中消失的数字](https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/) // [154. 寻找旋转排序数组中的最小值 II](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array-ii/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[写对二分查找不是套模板并往里面填空，需要仔细分析题意](https://leetcode.cn/problems/search-insert-position/solution/te-bie-hao-yong-de-er-fen-cha-fa-fa-mo-ban-python-/) by [liweiwei1419](https://leetcode.cn/u/liweiwei1419/)
[二分查找](https://leetcode.cn/leetbook/detail/binary-search/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 双指针专题

| 题目分类     | 题目编号                                                     |
| ------------ | ------------------------------------------------------------ |
| 对撞指针问题 | [1. 两数之和](https://leetcode.cn/problems/two-sum/) // [344. 反转字符串](https://leetcode.cn/problems/reverse-string/) // [345. 反转字符串中的元音字母](https://leetcode.cn/problems/reverse-vowels-of-a-string/) // [125. 验证回文串](https://leetcode.cn/problems/valid-palindrome/) // [11. 盛最多水的容器](https://leetcode.cn/problems/container-with-most-water/) // [15. 三数之和](https://leetcode.cn/problems/3sum/) // [18. 四数之和](https://leetcode.cn/problems/4sum/) // [167. 两数之和 II - 输入有序数组](https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/) // [88. 合并两个有序数组](https://leetcode.cn/problems/merge-sorted-array/) // [283. 移动零](https://leetcode.cn/problems/move-zeroes/) // [27. 移除元素](https://leetcode.cn/problems/remove-element/) // [455. 分发饼干](https://leetcode.cn/problems/assign-cookies/) // [561. 数组拆分](https://leetcode.cn/problems/array-partition/) // [9. 回文数](https://leetcode.cn/problems/palindrome-number/) |
| 快慢指针问题 | [876. 链表的中间结点](https://leetcode.cn/problems/middle-of-the-linked-list/) // [206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/) // [19. 删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) // [141. 环形链表](https://leetcode.cn/problems/linked-list-cycle/) // [142. 环形链表 II](https://leetcode.cn/problems/linked-list-cycle-ii/) // [21. 合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/) // [26. 删除有序数组中的重复项](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/) // [83. 删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/) // [82. 删除排序链表中的重复元素 II](https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/) // [86. 分隔链表](https://leetcode.cn/problems/partition-list/) // [234. 回文链表](https://leetcode.cn/problems/palindrome-linked-list/) |
| 滑动窗口问题 | [209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/) // [5. 最长回文子串](https://leetcode.cn/problems/longest-palindromic-substring/) // [76. 最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring/) // [283. 移动零](https://leetcode.cn/problems/move-zeroes/) // [80. 删除有序数组中的重复项 II](https://leetcode.cn/problems/remove-duplicates-from-sorted-array-ii/) // [561. 数组拆分](https://leetcode.cn/problems/array-partition/) // [457. 环形数组是否存在循环](https://leetcode.cn/problems/circular-array-loop/) // [718. 最长重复子数组](https://leetcode.cn/problems/maximum-length-of-repeated-subarray/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)
[滑动窗口和双指针](https://leetcode.cn/leetbook/detail/sliding-window-and-two-pointers/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 前缀和专题

| 题目分类         | 题目编号                                                     |
| ---------------- | ------------------------------------------------------------ |
| 一维数组的前缀和 | [560. 和为 K 的子数组](https://leetcode.cn/problems/subarray-sum-equals-k/) // [930. 和相同的二元子数组](https://leetcode.cn/problems/binary-subarrays-with-sum/) // [525. 连续数组](https://leetcode.cn/problems/contiguous-array/) // [974. 和可被 K 整除的子数组](https://leetcode.cn/problems/subarray-sums-divisible-by-k/) // [523. 连续的子数组和](https://leetcode.cn/problems/continuous-subarray-sum/) // [1248. 统计「优美子数组」](https://leetcode.cn/problems/count-number-of-nice-subarrays/) |
| 二维数组的前缀和 | [304. 二维区域和检索 - 矩阵不可变](https://leetcode.cn/problems/range-sum-query-2d-immutable/) // [1314. 矩阵区域和](https://leetcode.cn/problems/matrix-block-sum/) // [1074. 元素和为目标值的子矩阵数量](https://leetcode.cn/problems/number-of-submatrices-that-sum-to-target/) // [363. 矩形区域不超过 K 的最大数值和](https://leetcode.cn/problems/max-sum-of-rectangle-no-larger-than-k/) |
| 前缀和与二叉树   | [437. 路径总和 III](https://leetcode.cn/problems/path-sum-iii/) // [1022. 从根到叶的二进制数之和](https://leetcode.cn/problems/sum-of-root-to-leaf-binary-numbers/) // [129. 求根节点到叶节点数字之和](https://leetcode.cn/problems/sum-root-to-leaf-numbers/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[前缀和](https://leetcode.cn/leetbook/detail/qian-zhui-he/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)

## 位运算专题

| 题目分类         | 题目编号                                                     |
| ---------------- | ------------------------------------------------------------ |
| 位运算的基本运算 | [136. 只出现一次的数字](https://leetcode.cn/problems/single-number/) // [190. 颠倒二进制位](https://leetcode.cn/problems/reverse-bits/) // [191. 位1的个数](https://leetcode.cn/problems/number-of-1-bits/) // [201. 数字范围按位与](https://leetcode.cn/problems/bitwise-and-of-numbers-range/) // [338. 比特位计数](https://leetcode.cn/problems/counting-bits/) |
| 位运算的技巧     | [260. 只出现一次的数字 III](https://leetcode.cn/problems/single-number-iii/) // [342. 4的幂](https://leetcode.cn/problems/power-of-four/) // [371. 两整数之和](https://leetcode.cn/problems/sum-of-two-integers/) |
| 布隆过滤器       | [705. 设计哈希集合](https://leetcode.cn/problems/design-hashset/) // [706. 设计哈希映射](https://leetcode.cn/problems/design-hashmap/) // [1044. 最长重复子串](https://leetcode.cn/problems/longest-duplicate-substring/) // [211. 添加与搜索单词 - 数据结构设计](https://leetcode.cn/problems/design-add-and-search-words-data-structure/) |

**推荐阅读** [(欢迎投稿)](https://leetcode.cn/link/?target=https://wenjuan.feishu.cn/m?t=sXWjIs9NMiKi-gip3)

[位运算和数学](https://leetcode.cn/leetbook/detail/bit-manipulation-and-math/) by [力扣 (LeetBook)](https://leetcode.cn/leetbook/)