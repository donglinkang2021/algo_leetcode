#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // ��ʼ��
    std::vector<int> vec = {5, 3, 9, 1};

    // ���Ԫ��
    vec.push_back(7);
    vec.emplace_back(11);

    // ����Ԫ��
    auto it = vec.begin() + 2;
    vec.insert(it, 4);

    // ɾ��Ԫ��
    vec.erase(vec.begin() + 1); // ɾ���ڶ���Ԫ��

    // ����Ԫ��
    std::cout << "��һ��Ԫ��: " << vec.front() << std::endl;
    std::cout << "���һ��Ԫ��: " << vec.back() << std::endl;

    // ����
    std::cout << "����Ԫ��: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ����
    std::sort(vec.begin(), vec.end());

    // ����
    auto found = std::find(vec.begin(), vec.end(), 9);
    if(found != vec.end()) {
        std::cout << "�ҵ�Ԫ��: " << *found << std::endl;
    }

    return 0;
}