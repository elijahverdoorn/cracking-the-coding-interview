/* Cracking the Coding Interview
 * Problem 2.2
 * Elijah Verdoorn
 * 1/13/17
 */

#include "../linkedList.cpp"
#include <iostream>


template <class T>
Node<T>* getElementFromEnd(Node<T>* n, int k)
{
	int count = 0;
	Node<T>* headNode = n;
	while (n->getNext() != nullptr)
	{
		count++;
		n = n->getNext();
	}
	count++; // account for the fact that we quit one node early
	int nodeToReturn = count - k;
	if (nodeToReturn < 0)
	{
		std::cout << "Error: node out of bounds" << std::endl;
		return n;
	}
	count = 1;
	n = headNode;
	while (n->getNext() != nullptr)
	{
		if (count == nodeToReturn)
		{
			return n;
		} else {
			count++;
			n = n->getNext();
		}
	}
	return n;
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

	Node<int>* returnedNode;
	returnedNode = getElementFromEnd(&n1, 3);
	std::cout << "Should be 2: " << returnedNode->getData() << std::endl;

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(4);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

	returnedNode = getElementFromEnd(&n1, 1);
	std::cout << "Should be 4: " << returnedNode->getData() << std::endl;

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(5);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

	returnedNode = getElementFromEnd(&n1, 4);
	std::cout << "Should be 1: " << returnedNode->getData() << std::endl;
}

