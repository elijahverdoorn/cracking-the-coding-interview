/* Cracking the Coding Interview
 * Chapter 2 Tests
 * Elijah Verdoorn
 * 1/11/17
*/

#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include "linkedList.cpp"

#include "prob1/removeDups.cpp"

//TEST_CASE("Node functions as expected", "[Node]")
//{
//	Node<int> n1, n2, n3;
//	n1.setData(1);
//	n2.setData(2);
//	n3.setData(3);
//
//	n1.setNext(&n2);
//	n2.setNext(&n3);
//	
//	SECTION("Setting and getting links works properly")
//	{
//		REQUIRE(n1.getNext() == &n2);
//	}
//
//	SECTION("Setting and getting data works properly")
//	{
//		REQUIRE(n1.getData() == 1);
//		REQUIRE(n2.getData() == 2);
//		REQUIRE(n1.getNext()->getData() == 2);
//	}
//
//	SECTION("Working with node 3 works properly")
//	{
//		REQUIRE(n3.getData() == 3);
//		REQUIRE(n3.getNext() == NULL);
//	}
//}
//
TEST_CASE("Test problem 2: Remove Duplicates")
{
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

	SECTION("Removing a duplicate")
	{
		removeDups(n1);
		REQUIRE(n2.getNext() == &n4);
	}
}

