#include <iostream>
#include <conio.h>
using namespace std;

class Person
{

private:
    int rollno;
    string name;

public:
    Person()
    {
        rollno = 10;
        rollno = 50;
    }

    void get()
    {
        cout << "\n\n"
             << rollno << "\n";
    }
};

int main()
{
    Person P;
    P.get();

    return 0;
}
