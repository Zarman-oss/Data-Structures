#include <iostream>
#include <fstream>
using namespace std;

class Base
{
public:
};

class Derive
{
public:
  friend getNum()
};

friend getNum()
{

  cout << "Friend func";
};

int main()
{

  return 0;
}
