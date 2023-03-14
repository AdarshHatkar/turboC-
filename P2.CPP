/*Practical No:2  Write a program in C++ to demonstrate constructor and destructor */

#include <iostream.h>
#include <conio.h>

class Adarsh
{
public:
    Adarsh()
    {

	cout << "Default constructor called \n";
    }

    Adarsh(int a)
    {

	cout << "Parameterize constructor called \n";
    }

    Adarsh(Adarsh &obj)
    {

	cout << "Copy constructor called\n";
    }

    ~Adarsh()
    {

	cout << "Destructor called \n";
    }
};

int main()
{   clrscr();
    Adarsh obj_1;
    Adarsh obj_2(52);
    Adarsh obj_3(obj_1);
    getch();
    return 0;
}