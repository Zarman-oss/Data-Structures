#include <iostream>
using namespace std;

class Person
{

private:
    int number; // instance variable

    static int keys;

public:
    Person()

    {
    }

    void print()
    {
        cout << "roll no is: " << keys << endl;
    }
};

int Person::keys = 2;

int main()
{
    Person p;
    p.print();
    return 0;
}
