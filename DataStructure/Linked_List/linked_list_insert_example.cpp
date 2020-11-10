/* learning from GeeksforGeeks and BitDegree learn
 * Including general oprations of a linked-list
 * The first time that I implement linked-list
 */

#include <bits/stdc++.h>

using namespace std;

// define a class represent each node of list
class Node
{
		public:
				int data;
				Node* next;
};

// print all elements in the list
void print_list(Node * cur)
{
		cout << "\nPrinting new list\n";
		while(cur != nullptr)
		{
				cout << cur->data << endl;
				cur = cur->next;
		}
}

// inseart an element at the start
void push(Node** head_ref, int new_data)
{
		// 1. allocate node
		Node* new_node = new Node();

		// 2. put in the data
		new_node->data = new_data;

		// 3. make next of new node as head
		new_node->next = (*head_ref);

		// 4. move the head to point to the new node
		(*head_ref) = new_node;

}

// insert a node after the given prev_node
void inseartAfter(Node* prev_node, int new_data)
{

		// 1. Check if the given prev_node is NULL
		if (prev_node == nullptr)
		{
				cout << "The given previous node cannot be NULL";
				return;
		}

		// 2. Allocate new node
		Node* new_node = new Node();

		// 3. put in the data
		new_node->data = new_data;

		// 4. Make next of new node as next of prev_node
		new_node->next = prev_node->next;

		// 5. move the next of prev_node as new_node
		prev_node->next = new_node;

}

// Add a node at the end
void append(Node** head_ref, int new_data)
{
		// 1. allocate node
		Node* new_node = new Node();

		// used in step 5
		Node* last = *head_ref;

		// 2. put in the data
		new_node->data = new_data;

		// 3. This new node is going to be the last node,
		// so make next of it as NULL
		new_node->next = nullptr;

		// 4. If the Linked List is empty,
		// then make the new node as head
		if(*head_ref == nullptr)
		{
				*head_ref = new_node;
				return;
		}

		// 5. Else traverse till the last node
		while (last->next != nullptr)
		{
				last = last->next;
		}

		// 6. change the next of last node
		last->next = new_node;
		return;
}

int main()
{
		Node* head = nullptr;
		Node* second = nullptr;
		Node* third = nullptr;

		head = new Node();
		second = new Node();
		third = new Node();

		head->data = 1;
		head->next = second;

		second->data = 2;
		second->next = third;

		third->data = 3;
		third->next = nullptr;
		
		// first print
		print_list(head);

		// insert at front
		push(&head, 11);
		print_list(head);

		// inseart at any position, given the previrous node
		inseartAfter(second, 22);
		print_list(head);


		// append an element
		append(&head, 33);
		print_list(head);

		return 0;
}
