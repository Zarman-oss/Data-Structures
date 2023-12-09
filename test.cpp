#include <iostream>
using namespace std;

class A
{

private:
    int a;

public:
    void Cout()
    {
        a = 0;
    }

    void show()
    {
        cout << "n =" << a;
    }

    void operator++()
    {
        a = a + 1;
    }
};

int main()

{
    A obj;
    obj.show();
    ++obj;

    return 0;
}
