/* Cracking the Coding Interview
 * Elijah Verdoorn
 * Problem 2.5
 * 1/18/17
 */

#include <iostream>
#include "../linkedList.cpp"

Node<int>* sumList(Node<int>* first, Node<int>* second)
{
	int firstInt = 0;
	int secondInt = 0;
	while (first->getNext() != nullptr)
	{
		firstInt = firstInt * 10;
		firstInt += first->getData();
		first = first->getNext();
	}
	firstInt = firstInt * 10;
	firstInt += first->getData();

	std::cout << firstInt << std::endl;

	while (second->getNext() != nullptr)
	{
		secondInt = secondInt * 10;
		secondInt += second-> getData();
		second = second->getNext();
	}
	secondInt = secondInt * 10;
	secondInt += second-> getData();
	
	std::cout << secondInt << std::endl;

	int result = firstInt + secondInt;

	std::cout << result << std::endl;

	int placeCounter = 10;
	Node<int>* prev;
	while (result % placeCounter != result)
	{
		int thisPlace = result % placeCounter;
		Node<int> thisNode;
		thisNode.setData(thisPlace);
		if (prev->getNext() != nullptr)
		{
			thisNode.setNext(prev);
		}
		prev = &thisNode;
		placeCounter = placeCounter * 10;
	}
	return prev;
}

int main()
{
	Node<int> n1, n2, n3, n4, n5, n6;
	n1.setData(7);
	n2.setData(1);
	n3.setData(6);
	n4.setData(5);
	n5.setData(9);
	n6.setData(2);

	n1.setNext(&n2);
	n2.setNext(&n3);

	printList(&n1);

	n4.setNext(&n5);
	n5.setNext(&n6);
	
	printList(&n4);

	Node<int>* result = sumList(&n1, &n4);
	printList(result);
}

