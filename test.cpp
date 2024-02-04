#include <iostream>
using namespace std;
class Test
{

public:
  string name;
  Test()
  {
    name = "Brad";
  }

  friend ostream &operator<<(ostream &output, Test &o)
  {
    output << "\n Your Name: " << o.name;
    return output;
  }
};

int main()
{
  Test T1;
  cout << T1;
  return 0;
}
