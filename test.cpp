#include <iostream>
using namespace std;

class Person
{

private:
    int rollno = 2;

public:
    Person()

    {

        rollno++;
    }

    void print() const
    {
        cout << "roll no is: " << rollno << endl;
    }
};

int main()
{
    Person P1, P2, P3;
    P1.print();
    P2.print();
    P3.print();
    return 0;
}
