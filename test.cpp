#include <iostream>
using namespace std;

class Person
{
    int rollno;

public:
    void setRollNo(int r)
    {
        rollno = r;
    }

    void getRollNo()
    {

        cout << "\n\n Roll No. is: " << rollno;
    }
};

int main()

{
  
    Person *ptr;
    ptr = new Person;
    ptr -> setRollNo(19);
    return 0;
}
