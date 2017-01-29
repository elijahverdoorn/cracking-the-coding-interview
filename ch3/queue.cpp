/* Cracking the Coding Interview
 * Chapter 3
 * Elijah Verdoorn
 * 1/29/17
 */

#include <iostream>

#ifndef _NODE_
#define _NODE_

template <class T>
class Node
{
	public:
		T data;
		Node<T>* next;
		Node<T>* prev;
		Node(T inData)
		{
			data = inData;
		}
};
#endif

#ifndef _QUEUE_
#define _QUEUE_

template <class T>
class Queue
{
	private:
		Node<T>* first = NULL;
		Node<T>* last = NULL;

	public:
		void prepend(T inData)
		{
			Node<T>* newNode = new Node<T>(inData);
			if (first != NULL)
				first->prev = newNode;
			newNode->next = first;
			if (last == NULL)
				last = newNode;
			first = newNode;
		}

		void append(T inData)
		{
			Node<T>* newNode = new Node<T>(inData);
			newNode->prev = last;
			if (last != NULL)
				last->next = newNode;
			if (first == NULL)
				first = newNode;
			last = newNode;
		}

		T popFirst()
		{
			T temp = first->data;
			first = first->next;
			if (first != NULL)
				first->prev = NULL;
			return temp;
		}

		T popLast()
		{
			T temp = last->data;
			last = last->prev;
			last->next = NULL;
			return temp;
		}

		T peekFirst()
		{
			return first->data;
		}

		T peekLast()
		{
			return last->data;
		}
};
#endif

int main()
{
	Queue<int> testQueue;
	testQueue.append(1);
	std::cout << testQueue.peekLast() << " should equal " << testQueue.peekLast() << std::endl;
	
	testQueue.append(2);
	std::cout << testQueue.peekLast() << " should equal 2" << std::endl;

	testQueue.prepend(3);
	std::cout << testQueue.peekFirst() << " should equal 3" << std::endl;

	testQueue.popFirst();
	std::cout << testQueue.peekFirst() << " should equal 1" << std::endl;

	testQueue.popLast();
	std::cout << testQueue.peekLast() << " should equal 1" << std::endl;
return 0;
}
