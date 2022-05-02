#pragma once
// √‚√≥: https://codechacha.com/ko/singly-linked-list-in-cpp/

typedef struct ListNode
{
	int data;
	struct ListNode* next;
}ListNode;

class LinkedList
{
public:
	ListNode* head = nullptr;
	void InsertInLinkedList(ListNode** head, int data, int position);
	int ListLength(struct ListNode* head);
	void PrintList(struct ListNode* head);
	void DeleteNodeFromLinkedList(ListNode** head, int position);

	void ShowLinkedList();
};

