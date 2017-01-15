/* Cracking the Coding Interview
 * Linked List Implementation
 * Elijah Verdoorn
 * 1/11/17
*/

#ifndef _NODE_
#define _NODE_

#include <stddef.h>

template <class T>
class Node
{
	private:
		T data;
		Node* next = NULL;
	public:
		T getData()
		{
			return data;
		}

		Node<T>* getNext()
		{
			return next;
		}

		void setNext(Node<T>* n)
		{
			next = n;
		}

		void setData(T d)
		{
			data = d;
		}
};
#endif

#ifndef _LINKEDLIST_
#define _LINKEDLIST_

template<class T>
class LinkedList
{
	private:
		Node<T>* headNode;
	public:
		Node<T>* getHeadNode()
		{
			return headNode;
		}
};
#endif

/* printList()
 * This is kinda messy, but it gets the job done
 */
template <class T>
void printList(Node<T>* n)
{
	if (n->getNext() == nullptr)
	{
		std::cout << n->getData() << std::endl;
		return;
	}
	do {
		std::cout << n->getData() << " ";
		n = n->getNext();
	} while (n->getNext() != nullptr);
	std::cout << n->getData() << std::endl;
	return;
}


