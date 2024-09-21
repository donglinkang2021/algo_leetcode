#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // 初始化
    std::string greeting = "Hello";
    std::string name = "Alice";

    // 拼接字符串
    std::string message = greeting + ", " + name + "!";
    std::cout << message << std::endl; // 输出: Hello, Alice!

    // 访问字符
    std::cout << "第一个字符: " << greeting[0] << std::endl; // 'H'

    // 查找和替换
    size_t pos = message.find("Alice");
    if(pos != std::string::npos) {
        message.replace(pos, 5, "Bob");
    }
    std::cout << "替换后: " << message << std::endl; // 输出: Hello, Bob!

    // 获取子串
    std::string sub = message.substr(7, 3); // "Bob"
    std::cout << "子串: " << sub << std::endl;

    // 大小与容量
    std::cout << "字符串长度: " << message.size() << std::endl;

    // 遍历字符串
    std::cout << "遍历字符串: ";
    for(char c : message) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;

    // 转换与比较
    std::string numStr = "2023";
    int year = std::stoi(numStr);
    std::cout << "年份: " << year << std::endl;

    // 比较字符串
    if(greeting == "Hello") {
        std::cout << "问候语是 'Hello'" << std::endl;
    }

    return 0;
}