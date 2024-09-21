#include <bits/stdc++.h>
using namespace std;

// ����һ���ṹ��
struct Person {
    string name;
    int age;
};

// �Զ���ȽϺ���
bool comparePerson(const Person &a, const Person &b) {
    return a.age < b.age; // ��������������
}

int main() {
    // ����һ��Person������
    vector<Person> people = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };
    
    // ����ǰ��ӡ
    cout << "����ǰ��" << endl;
    for(const auto &person : people) {
        cout << person.name << " " << person.age << endl;
    }
    
    // ʹ���Զ���ȽϺ�����������
    sort(people.begin(), people.end(), comparePerson);
    
    // ������ӡ
    cout << "�����" << endl;
    for(const auto &person : people) {
        cout << person.name << " " << person.age << endl;
    }
    
    return 0;
}