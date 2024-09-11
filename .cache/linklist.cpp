#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
protected:
    struct Node {
        int val;
        Node* pred;
        Node* next;
        Node() {}
        Node(int val) : val(val), pred(nullptr), next(nullptr) {}
        Node(int val, Node* pred, Node* next):val(val), pred(pred),next(next) {}
        
        Node* insertPred(int e) {
            Node* node = new Node(e, this->pred, this);
            this->pred->next = node;
            this->pred = node;
            return node;
        }
        Node* insertSucc(int e) {
            Node* node = new Node(e, this, this->next);
            this->next->pred = node;
            this->next = node;
            return node;
        }
        ~Node() {
            if (this->next != nullptr) {
                delete this->next;
                this->next = nullptr;
            }
            if (this->pred != nullptr) {
                delete this->pred;
                this->pred = nullptr;
            }
        }
    };
public:
    MyLinkedList() {
        this->header = new Node(-1, nullptr, nullptr);
		this->tailer = new Node(-1, nullptr, nullptr);
		this->header->next = this->tailer;
		this->tailer->pred = this->header;
		this->size = 0;
    }
    
    int get(int index) {
		if (index < 0 || index > this->size-1) {
			return -1;
		}
		Node* node = this->header->next;
		while (0 < index) {
			node = node->next;
			index--;
		}
		return node->val;
    }
    
    void addAtHead(int val) {
		this->header->insertSucc(val);
		this->size++;
    }
    
    void addAtTail(int val) {
		this->tailer->insertPred(val);
		this->size++;
    }
    
    void addAtIndex(int index, int val) {
		Node* node = header->next;
		if (index < 0 || index > this->size) {
			return;
		}
		while (0 < index) {
			node = node->next;
			index--;
		}
		node->insertPred(val);
		this->size++;
    }
    
    void deleteAtIndex(int index) {
        Node* node = header->next;
        if (index < 0 || index > this->size - 1) {
            return;
        }
        while (0 < index) {
            node = node->next;
            index--;
        }
        node->pred->next = node->next;
        node->next->pred = node->pred;
        //delete node;
        node->pred = nullptr;
        node->next = nullptr;
        this->size--;
    }
    	
private:
    int size;
	Node* header;
	Node* tailer;
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
