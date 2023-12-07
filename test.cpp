#include <iostream>
using namespace std;

class X
{
private:
    int x;

public:
    void print()
    {
        cout << "x : " << x;
    }

    friend void someFunc(X obj);
};

void someFunc(X obj)
{
    obj.x = 12;
}

int main()

{

    X obj;
    someFunc(obj);
    obj.print();
    return 0;
}
