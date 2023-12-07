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

class Wheel
{

public:
    Wheel()
    {
        cout << "\n\n Wheel Constructor";
    }

    void move()
    {
        cout << "n\n Move";
    }

    ~Wheel()
    {
        cout << "n\n Wheel Destructor";
    }
};

class Car
{
public:
    Engine E;
    Wheel W;

    Car()
    {
        cout << "n\n Car Constructor";
    }

    ~Car()
    {
        cout << "n\n Car Destructor";
    }
};

int main()

{

    Car C; 
    C.E.start();

    return 0;
}
