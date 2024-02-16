#include <iostream>
using namespace std;

class Base
{
  string name;

public:
  void getName()
  {
    cout << "name prompt";
  }
};

class Derived : public Base
{
public:
  void getRoll()
  {
    getName();
  }
};

int main()
{

  Derived D;
  D.getRoll();
  return 0;
}