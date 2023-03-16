/*Practical No:2  Write a program in C++ to demonstrate constructor and destructor */

#include <iostream.h>
#include <conio.h>

class MyClass
{
public:
    MyClass()
    {

        cout << "Default constructor called \n";
    }

    MyClass(int a)
    {

        cout << "Parameterize constructor called \n";
    }

    MyClass(MyClass &obj)
    {

        cout << "Copy constructor called\n";
    }

    ~MyClass()
    {

        cout << "Destructor called \n";
    }
};

int main()
{
    clrscr();
    MyClass obj_1;
    MyClass obj_2(52);
    MyClass obj_3(obj_1);
    getch();
    return 0;
}