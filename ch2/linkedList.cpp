/* Cracking the Coding Interview
 * Linked List Implementation
 * Elijah Verdoorn
 * 1/11/17
*/

#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

template <class T>
class Node
{
	private:
		T data;
		Node* next;
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

TEST_CASE("Node functions as expected", "[Node]")
{
	Node<int> n;
	n.setData(1);
	Node<int> n2;
	n2.setData(2);
	n.setNext(&n);

	SECTION("Setting and getting links works properly")
	{
		REQUIRE(n.getNext() == &n2);
		REQUIRE(n2.getNext() == NULL);
	}

	SECTION("Setting and getting data works properly")
	{
		REQUIRE(n.getData() == 1);
		REQUIRE(n2.getData() == 2);
		REQUIRE(n.getNext()->getData() == 2);
	}
}

