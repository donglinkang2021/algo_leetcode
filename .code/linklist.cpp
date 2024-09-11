#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 1e3 + 10;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = nullptr;
    }
    int get(int index) {
        Node* current = head;
        for (int i = 0; i < index; ++i) {
            if (current == nullptr) return -1;
            current = current->next;
        }
        return current ? current->val : -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr) return;
            current = current->next;
        }
        if (current == nullptr) return;
        Node* newNode = new Node(val);
        newNode->next = current->next;
        current->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if (index == 0 && head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr) return;
            current = current->next;
        }
        if (current == nullptr || current->next == nullptr) return;
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main() {
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(1);
    obj->addAtTail(3);
    obj->addAtIndex(1, 2);
    cout << obj->get(1) << endl;
    obj->deleteAtIndex(1);
    cout << obj->get(1) << endl;
    return 0;
}
