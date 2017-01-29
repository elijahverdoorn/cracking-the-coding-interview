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
		Node(T inData)
		{
			data = inData;
		}
};
#endif

#ifndef _STACK_
#define _STACK_

template <class T>
class Stack
{
	private:
		Node<T>* head = NULL;

	public:
		T peek()
		{
			return head->data;
		}

		void push(T inData)
		{
			Node<T>* newNode  = new Node<T>(inData);
			newNode->next = head;
			head = newNode;
		}

		T pop()
		{
			T temp = head->data;
			head = head->next;
			return temp;
		}

		bool isEmpty()
		{
			return head == NULL;
		}
};
#endif

int main()
{
	Stack<int> testStack;
	testStack.push(1);
	testStack.push(2);

	std::cout << testStack.pop() << std::endl;
	std::cout << testStack.pop() << std::endl;

	testStack.push(3);
	std::cout << testStack.peek() << std::endl;
	std::cout << testStack.peek() << std::endl;
	std::cout << testStack.peek() << std::endl;

	return 0;
}

