#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // 初始化
    std::vector<int> vec = {5, 3, 9, 1};

    // 添加元素
    vec.push_back(7);
    vec.emplace_back(11);

    // 插入元素
    auto it = vec.begin() + 2;
    vec.insert(it, 4);

    // 删除元素
    vec.erase(vec.begin() + 1); // 删除第二个元素

    // 访问元素
    std::cout << "第一个元素: " << vec.front() << std::endl;
    std::cout << "最后一个元素: " << vec.back() << std::endl;

    // 遍历
    std::cout << "所有元素: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 排序
    std::sort(vec.begin(), vec.end());

    // 查找
    auto found = std::find(vec.begin(), vec.end(), 9);
    if(found != vec.end()) {
        std::cout << "找到元素: " << *found << std::endl;
    }

    return 0;
}