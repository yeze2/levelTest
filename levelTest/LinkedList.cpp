#include "LinkedList.h"
#include <iostream>


void LinkedList::InsertInLinkedList(ListNode** head, int data, int position)
{
	ListNode* inserted = new ListNode;
	inserted->data = data;

	if (position == 1 || *head == nullptr)
	{
		inserted->next = *head;
		*head = inserted;
	}
	else
	{
		ListNode* insertedPrev = *head;
		for (int i = 1; (insertedPrev->next != nullptr) && (i < position - 1); i++)
		{
			insertedPrev = insertedPrev->next;
		}
		
		ListNode* insertedNext = insertedPrev->next;
		insertedPrev->next = inserted;
		inserted->next = insertedNext;
	}
}

int LinkedList::ListLength(ListNode* head)
{
	int len = 0;
	struct ListNode* current = head;
	while (current != nullptr)
	{
		len++;
		current = current->next;
	}
	return len;
}

void LinkedList::PrintList(ListNode* head)
{
	struct ListNode* current = head;
	while (current != nullptr)
	{
		std::cout << current->data << "->";
		current = current->next;

	}
	std::cout << "NULL\n";
}

void LinkedList::DeleteNodeFromLinkedList(ListNode** head, int position)
{
	if (*head == NULL)
	{
		std::cout << "List empty" << std::endl;
		return;
	}

	ListNode* removePrev;
	ListNode* removed;

	if (position == 1)
	{
		removed = *head;
		*head = (*head)->next;
		delete(removed);
	}
	else
	{
		ListNode* removedPrev = *head;
		removed = removedPrev->next;
		for (int i = 1; (removed->next != nullptr) && (i < position - 1); i++)
		{
			removedPrev = removedPrev->next;
			removed = removedPrev->next;
		}
		removedPrev->next = removed->next;
		delete(removed);
	}
}

void LinkedList::ShowLinkedList()
{
	InsertInLinkedList(&head, 4, 1);
	InsertInLinkedList(&head, 17, 1);
	InsertInLinkedList(&head, 1, 1);
	InsertInLinkedList(&head, 5, 1);

	PrintList(head);
	InsertInLinkedList(&head, 10, 1);
	PrintList(head);
	InsertInLinkedList(&head, 11, 3);
	PrintList(head);
	InsertInLinkedList(&head, 11, 9);
	PrintList(head);
	DeleteNodeFromLinkedList(&head, 1);
	PrintList(head);
	DeleteNodeFromLinkedList(&head, 3);
	PrintList(head);
	DeleteNodeFromLinkedList(&head, 10);
	PrintList(head);
}

// √‚√≥: https://codechacha.com/ko/singly-linked-list-in-cpp/