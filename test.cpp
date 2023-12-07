#include <iostream>
using namespace std;

class Engine
{

public:
    Engine()
    {
        cout << "n\n Engine Constructor";
    }

    void start()
    {
        cout << "n\n start";
    }
    ~Engine()
    {
        cout << "n\n Engine Destructor";
    }
};

class wheel()
{

public:
    Wheel()
    {
        cout << "\n\n Wheel Constructor"
    }

    void move()
    {
        cout << "n\n Move";
    }  


    ~Wheel(){
        cout<<""
    }
}      



int main()

{

    Person *ptr;
    ptr = new Person;
    ptr->setRollNo(19);
    return 0;
}
