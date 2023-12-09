#include <iostream>
using namespace std;

class One
{
public:
    string name;
    One(string n)
    {

        this->name = n;
    }

    One operator = (One obj)
    {

        obj.name = n;
        return obj;
    }
};

int main()

{
    One O1('name'), O2('name two');
    O1 = O2;
    return 0;
}
