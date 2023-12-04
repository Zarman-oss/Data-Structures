#include <iostream>
#include <conio.h>
using namespace std;

class Person
{

private:
    int rollno; // initialization
    string name;     // assignment

public:
    Person(): rollno(100), name("name")
    {
    }

    void print()
    {
        // assignment
        cout << "\n\n"<< rollno << endl; 
        cout <<"n\n" << name;
    }
};

int main()
{
    Person P;
    P.print();

    return 0;
}
