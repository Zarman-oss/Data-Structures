#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *pre;
    Node *next;

    void setData(int n)
    {
        data = n;
    }
    int getData()
    {
        return data;
    }

    void setPre(Node *p)
    {
        pre = p;
    }
    Node* setPre(Node *p)
    {
        pre = p;
    }
}

int
main()

{

    return 0;
}
