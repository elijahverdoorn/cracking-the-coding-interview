/* Cracking the Coding Interview
 * Problem 2.3
 * Elijah Verdoorn
 * 1/15/17
 */

#include "../linkedList.cpp"
#include <iostream>

template <class T>
void removeMiddle(Node<T>* n)
{
	n->setData(n->getNext()->getData());
	if (n->getNext() == nullptr)
	{
		std::cout << "Error: can't delete the end this way" << std::endl;
	} else {
		n->setNext(n->getNext()->getNext());
		return;
	}
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
	removeMiddle(&n3);
	printList(&n1);

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(4);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);
	
	printList(&n1);
	removeMiddle(&n4);
	printList(&n1);

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(5);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);
	
	printList(&n1);
	removeMiddle(&n2);
	printList(&n1);
}

