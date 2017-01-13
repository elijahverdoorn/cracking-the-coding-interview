current: test 

linkedList.o: linkedList.cpp ../catch.hpp
	g++ -c -std=c++11 linkedList.cpp

linkedList: linkedList.o
	g++ -o -std=c++11 linkedList.out linkedList.o

removeDups.o: prob1/removeDups.cpp
	g++ -c -std=c++11 removeDups.cpp

ch2Tests.o: ch2Tests.cpp
	g++ -c -std=c++11 ch2Tests.cpp

test: linkedList.o ../catch.hpp prob1/removeDups.o ch2Tests.o
	g++ -o -std=c++11 ch2Tests.out ch2Tests.o linkedList.o prob1/removeDups.o
	./ch2Tests.out
