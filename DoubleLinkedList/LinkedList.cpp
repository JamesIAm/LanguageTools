#include <iostream>
#include "Node.cpp"

// Currently only ints
class LinkedList
{
public:
    LinkedList()
    {
    }
    void hello()
    {
        std::cout << "YO";
    }

private:
    Node firstNode;
    Node lastNode;
};