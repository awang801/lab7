lab7: test.o
	g++ -g -std=c++11 -Wall test.o -o lab7

test.o: test.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp
	g++ -g -std=c++11 -Wall -c test.cpp
clean:
	rm *.o lab7
	echo clean done
	
