/* Cracking the Coding Interview
 * Problem 2.1
 * Elijah Verdoorn
 * 1/1//17
*/

#include "../linkedList.cpp"
#include <iostream>
#include <map>
#include <stddef.h>

template <class T>
void removeDups(Node<T>* n)
{
	std::map<T, bool> seen;
	seen[n->getData()] = true;
	while(n->getNext() != nullptr)
	{
		if(seen.find(n->getNext()->getData()) == seen.end())
		{
			// this hasn't been seen yet, so add it then advance the loop
			seen[n->getNext()->getData()] = true;
		} else {
			// this one has been seen before, so we don't want to keep it around
			n->setNext(n->getNext()->getNext());
			continue;
		}
		n = n->getNext();
	}
}

int main()
{
	// Mostly for tests
	Node<int> n1, n2, n3, n4, n5;
	n1.setData(1);
	n2.setData(2);
	n3.setData(2);
	n4.setData(3);
	n5.setData(4);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

	printList(&n1);

	removeDups(&n1);

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

	removeDups(&n1);

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

	removeDups(&n1);

	printList(&n1);


}

