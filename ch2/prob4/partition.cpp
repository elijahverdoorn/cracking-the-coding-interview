/* Cracking the Coding Interview
 * Problem 2.4
 * Elijah Verdoorn
 * 1/15/17
 */

#include "../linkedList.cpp"
#include <iostream>

Node<int>* partition(Node<int>* n, int par)
{
	Node<int>* head = n;
	Node<int>* tail = n;
	while (n->getNext() != nullptr)
	{
		Node<int>* next = n->getNext();
		if (n->getData() < par)
		{
			n->setNext(head);
			head = n->getNext();
		} else {
			n->setNext(tail);
			tail = n->getNext();
		}
		n = next;
	}
	tail->setNext(nullptr);
	return head;
}

int main()
{
	// Mostly for tests
	Node<int> n1, n2, n3, n4, n5;
	n1.setData(1);
	n2.setData(2);
	n3.setData(3);
	n4.setData(4);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

	printList(&n1);
	Node<int>* head = partition(&n1, 3);
	printList(head);

	n1.setData(4);
	n2.setData(4);
	n3.setData(6);
	n4.setData(3);
	n5.setData(2);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);
	
//	printList(&n1);
	head = partition(&n1, 4);
//	printList(head);

	n1.setData(5);
	n2.setData(7);
	n3.setData(4);
	n4.setData(3);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);
	
//	printList(&n1);
	head = partition(&n1, 4);
//	printList(head);
}

