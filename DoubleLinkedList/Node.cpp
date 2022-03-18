class Node
{
public:
    Node()
    {
        previousNode = 0;
        nextNode = 0;
    }

private:
    Node *previousNode;
    Node *nextNode;
};