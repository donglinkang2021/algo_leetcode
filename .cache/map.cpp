#include <iostream>
#include <map>
#include <string>

int main() {
    // 初始化 map
    std::map<int, std::string> fruitMap = {
        {1, "苹果"},
        {2, "香蕉"},
        {3, "樱桃"}
    };

    // 添加元素
    fruitMap[4] = "日期";
    fruitMap.emplace(5, "橘子");

    // 修改元素
    fruitMap[2] = "新香蕉";

    // 删除元素
    fruitMap.erase(3);

    // 查找元素
    int searchKey = 2;
    auto it = fruitMap.find(searchKey);
    if(it != fruitMap.end()) {
        std::cout << "找到键 " << searchKey << "，值为 " << it->second << std::endl;
    } else {
        std::cout << "未找到键 " << searchKey << std::endl;
    }

    // 遍历 map
    std::cout << "所有水果:" << std::endl;
    for(const auto& pair : fruitMap) {
        std::cout << "键: " << pair.first << ", 值: " << pair.second << std::endl;
    }

    // 获取大小
    std::cout << "map 的大小: " << fruitMap.size() << std::endl;

    // 清空 map
    fruitMap.clear();
    if(fruitMap.empty()) {
        std::cout << "map 已被清空。" << std::endl;
    }

    return 0;
}