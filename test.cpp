#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    void getName()
    {
        cout << "n\n"<< name;
    }
};

int main()

{
    Person P1("Person1"), P2("Person2");
    Person P[2] = {P1, P2};
    P[0].getName();
    P[1].getName();

    return 0;
}
