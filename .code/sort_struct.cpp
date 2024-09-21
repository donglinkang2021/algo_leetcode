#include <bits/stdc++.h>
using namespace std;

// 定义一个结构体
struct Person {
    string name;
    int age;
};

// 自定义比较函数
bool comparePerson(const Person &a, const Person &b) {
    return a.age < b.age; // 按年龄升序排序
}

int main() {
    // 创建一个Person的向量
    vector<Person> people = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };
    
    // 排序前打印
    cout << "排序前：" << endl;
    for(const auto &person : people) {
        cout << person.name << " " << person.age << endl;
    }
    
    // 使用自定义比较函数进行排序
    sort(people.begin(), people.end(), comparePerson);
    
    // 排序后打印
    cout << "排序后：" << endl;
    for(const auto &person : people) {
        cout << person.name << " " << person.age << endl;
    }
    
    return 0;
}