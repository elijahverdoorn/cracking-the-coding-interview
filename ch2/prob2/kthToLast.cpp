/* Cracking the Coding Interview
 * Problem 2.2
 * Elijah Verdoorn
 * 1/13/17
 */

#include "../linkedList.cpp"
#include <iostream>

template <class T>
Node<T> getElementFromEnd(Node<T>* n, int k)
{
	
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

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(4);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

	n1.setData(1);
	n2.setData(1);
	n3.setData(4);
	n4.setData(5);
	n5.setData(5);

	n1.setNext(&n2);
	n2.setNext(&n3);
	n3.setNext(&n4);
	n4.setNext(&n5);

}

