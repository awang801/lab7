
#include <iostream>
#include <vector>
#include <stdexcept>
#include "LinkedList.h"
#include "Node.h"

int main(int argc, char** argv)
{


        LinkedList<int> myLinkedList;
        int test = 0;
        std::cout << "Running Testing Suite" << std::endl;


        std::cout << "Test Case" << ++test << ": isEmpty on new LinkedList.  Success: ";
        std::cout << (myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on new LinkedList. Success: ";
        std::cout << (myLinkedList.size() == 0) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": search on new LinkedList with no elements.  Success: ";
        std::cout << (!myLinkedList.search(5)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": removeBack on new, empty LinkedList. Success: ";
        std::cout << (!myLinkedList.removeBack()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": removeFront on new, empty LinkedList. Success: ";
        std::cout << (!myLinkedList.removeFront()) << std::endl;

        std::vector<int> myVector = myLinkedList.toVector();

        std::cout << "\n Test Case " << ++test << ": empty() on vector from new LinkedList.  Success: ";
        std::cout << (myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from new LinkedList. Success: ";
        std::cout << (myVector.size() == 0) << "\n\tSize: " << (myVector.size()) << std::endl;


        std::cout << "\n\n  Adding an elementto the front of the LinkedList  " << std::endl;
        myLinkedList.addFront(8);

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with one element.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with one element. Success: ";
        std::cout << (myLinkedList.size() == 1) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search for LinkedList with one element.  Success: ";
        std::cout << (myLinkedList.search(8)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with one element.  Success: ";
        std::cout << (!myLinkedList.search(9)) << std::endl;

        myVector = myLinkedList.toVector();

        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 1) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 8);


        std::cout << "\n\n  Adding an element to the front of the LinkedList  " << std::endl;
        myLinkedList.addFront(12);

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with two elements.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with two elements. Success: ";
        std::cout << (myLinkedList.size() == 2) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search on LinkedList with two elements.  Success: ";
        std::cout << (myLinkedList.search(12)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with two elements.  Success: ";
        std::cout << (!myLinkedList.search(4)) << std::endl;

        myVector = myLinkedList.toVector();

        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 2) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 12);

        std::cout << "\n\n  Adding an element to the back of the LinkedList  " << std::endl;
        myLinkedList.addBack(-3);

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with three elements.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with three elements. Success: ";
        std::cout << (myLinkedList.size() == 3) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search for on LinkedList with three elements.  Success: ";
        std::cout << (myLinkedList.search(-3)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with three elements.  Success: ";
        std::cout << (!myLinkedList.search(-12)) << std::endl;

        myVector = myLinkedList.toVector();
        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 3) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 12);

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[1] == 8);

        std::cout << "\n Test Case " << ++test << ": check for at back of vector from LinkedList.  Success: ";
        std::cout << (myVector[2] == -3);


        std::cout << "\n\n  Adding an element to the back of the LinkedList  " << std::endl;
        myLinkedList.addBack(19);

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with four elements.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with four elements. Success: ";
        std::cout << (myLinkedList.size() == 4) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search on LinkedList with four elements.  Success: ";
        std::cout << (myLinkedList.search(19)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with four elements.  Success: ";
        std::cout << (!myLinkedList.search(-12)) << std::endl;

        myVector = myLinkedList.toVector();
        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 4) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 12);

        std::cout << "\n Test Case " << ++test << ": check for element to be second to front of vector from LinkedList.  Success: ";
        std::cout << (myVector[1] == 8);

        std::cout << "\n Test Case " << ++test << ": check for element to be second to back of vector from LinkedList.  Success: ";
        std::cout << (myVector[2] == -3);

        std::cout << "\n Test Case " << ++test << ": check at back of vector from LinkedList.  Success: ";
        std::cout << (myVector[3] == 19);


        std::cout << "\n\n  Removing the back element of the LinkedList    Success: " << myLinkedList.removeBack() << std::endl;

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with three elements.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with three elements. Success: ";
        std::cout << (myLinkedList.size() == 3) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search on LinkedList with three elements.  Success: ";
        std::cout << (myLinkedList.search(-3)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with three elements.  Success: ";
        std::cout << (!myLinkedList.search(19)) << std::endl;

        myVector = myLinkedList.toVector();

        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 3) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check to be at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 12);

        std::cout << "\n Test Case " << ++test << ": check to be in middle of vector from LinkedList.  Success: ";
        std::cout << (myVector[1] == 8);

        std::cout << "\n Test Case " << ++test << ": check to be at back of vector from LinkedList.  Success: ";
        std::cout << (myVector[2] == -3);

        std::cout << "\n\n  Removing the front element of the LinkedList    Success: " << myLinkedList.removeFront() << std::endl;

        std::cout << "\n Test Case " << ++test << ": isEmpty on LinkedList with two elements.  Success: ";
        std::cout << (!myLinkedList.isEmpty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size on LinkedList with two elements. Success: ";
        std::cout << (myLinkedList.size() == 2) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": good search on LinkedList with two elements.  Success: ";
        std::cout << (myLinkedList.search(8)) << std::endl;

        std::cout << "\n Test Case " << ++test << ": bad search on LinkedList with two elements.  Success: ";
        std::cout << (!myLinkedList.search(12)) << std::endl;

        myVector = myLinkedList.toVector();

        std::cout << "\n Test Case " << ++test << ": empty() on vector from LinkedList.  Success: ";
        std::cout << (!myVector.empty()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": size() on vector from LinkedList. Success: ";
        std::cout << (myVector.size() == 2) << "\n\tSize: " << (myVector.size()) << std::endl;

        std::cout << "\n Test Case " << ++test << ": check at front of vector from LinkedList.  Success: ";
        std::cout << (myVector[0] == 8);

        std::cout << "\n Test Case " << ++test << ": check at back of vector from LinkedList.  Success: ";
        std::cout << (myVector[1] == -3);

        return 0;
}
