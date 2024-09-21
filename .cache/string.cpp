#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // ��ʼ��
    std::string greeting = "Hello";
    std::string name = "Alice";

    // ƴ���ַ���
    std::string message = greeting + ", " + name + "!";
    std::cout << message << std::endl; // ���: Hello, Alice!

    // �����ַ�
    std::cout << "��һ���ַ�: " << greeting[0] << std::endl; // 'H'

    // ���Һ��滻
    size_t pos = message.find("Alice");
    if(pos != std::string::npos) {
        message.replace(pos, 5, "Bob");
    }
    std::cout << "�滻��: " << message << std::endl; // ���: Hello, Bob!

    // ��ȡ�Ӵ�
    std::string sub = message.substr(7, 3); // "Bob"
    std::cout << "�Ӵ�: " << sub << std::endl;

    // ��С������
    std::cout << "�ַ�������: " << message.size() << std::endl;

    // �����ַ���
    std::cout << "�����ַ���: ";
    for(char c : message) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;

    // ת����Ƚ�
    std::string numStr = "2023";
    int year = std::stoi(numStr);
    std::cout << "���: " << year << std::endl;

    // �Ƚ��ַ���
    if(greeting == "Hello") {
        std::cout << "�ʺ����� 'Hello'" << std::endl;
    }

    return 0;
}