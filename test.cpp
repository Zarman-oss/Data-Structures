#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int x[] = {2, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(x);
  for (int i = 0; i < size++ i)
  {
    cout << x[i];
  }

  for (int i = 0; i < size; ++i)
  {
    if (x[i] % 2 == 0)
    {
      x[i] = x[i] * x[i];
    }
  }
  return 0;
}
