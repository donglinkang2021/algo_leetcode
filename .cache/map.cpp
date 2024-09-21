#include <iostream>
#include <map>
#include <string>

int main() {
    // ��ʼ�� map
    std::map<int, std::string> fruitMap = {
        {1, "ƻ��"},
        {2, "�㽶"},
        {3, "ӣ��"}
    };

    // ���Ԫ��
    fruitMap[4] = "����";
    fruitMap.emplace(5, "����");

    // �޸�Ԫ��
    fruitMap[2] = "���㽶";

    // ɾ��Ԫ��
    fruitMap.erase(3);

    // ����Ԫ��
    int searchKey = 2;
    auto it = fruitMap.find(searchKey);
    if(it != fruitMap.end()) {
        std::cout << "�ҵ��� " << searchKey << "��ֵΪ " << it->second << std::endl;
    } else {
        std::cout << "δ�ҵ��� " << searchKey << std::endl;
    }

    // ���� map
    std::cout << "����ˮ��:" << std::endl;
    for(const auto& pair : fruitMap) {
        std::cout << "��: " << pair.first << ", ֵ: " << pair.second << std::endl;
    }

    // ��ȡ��С
    std::cout << "map �Ĵ�С: " << fruitMap.size() << std::endl;

    // ��� map
    fruitMap.clear();
    if(fruitMap.empty()) {
        std::cout << "map �ѱ���ա�" << std::endl;
    }

    return 0;
}