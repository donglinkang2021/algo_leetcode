// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {
    if (head == nullptr) return head;
    head->next = removeElements(head->next, val);
    return head->val == val? head->next : head;
}

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

ListNode *removeNthFromEnd(ListNode *head, int n) {
	ListNode *newHead = new ListNode(0, head);
	ListNode *slow = newHead;
	ListNode *fast = head;

	for (int i = 0; i < n; i++)
		fast = fast->next;

	while (fast) {
		fast = fast->next;
		slow = slow->next;
	}

	slow->next = slow->next->next;
	newHead = newHead->next;
	return newHead;
}

ListNode* insertionSortList(ListNode* head) {
	if (head == nullptr) return head;
	ListNode *dummyHead = new ListNode(0, head);
	ListNode *lastSorted = head;
	ListNode *curr = head->next;
	while (curr){
		if (lastSorted->val <= curr->val){
			lastSorted = lastSorted->next;
		} else {
			ListNode *prev = dummyHead;
			while (prev->next->val <= curr->val) prev = prev->next;
			// record next
			lastSorted->next = curr->next;
			// insert
			curr->next = prev->next;
			prev->next = curr;
		}
		curr = lastSorted->next;
	}
	return dummyHead->next;
}