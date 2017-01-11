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

TEST_CASE("Node functions as expected", "[Node]")
{
	Node<int> n1, n2, n3;
	n1.setData(1);
	n2.setData(2);
	n3.setData(3);

	n1.setNext(&n2);
	n2.setNext(&n3);
	
	SECTION("Setting and getting links works properly")
	{
		REQUIRE(n1.getNext() == &n2);
	}

	SECTION("Setting and getting data works properly")
	{
		REQUIRE(n1.getData() == 1);
		REQUIRE(n2.getData() == 2);
		REQUIRE(n1.getNext()->getData() == 2);
	}

	SECTION("Working with node 3 works properly")
	{
		REQUIRE(n3.getData() == 3);
		REQUIRE(n3.getNext() == NULL);
	}
}

