/*Practical No:15 Write a program in C++ for constructor overloading. */
#include <iostream.h>
#include<conio.h>

class MyClass
{
public:
    int num1, num2;

    MyClass() // Default constructor
    {
	num1 = 0;
	num2 = 0;
    }

    MyClass(int n) // Parametrize constructor
    {
	num1 = n;
	num2 = 0;
    }

    MyClass(int n1, int n2) // Parametrize constructor
    {
	num1 = n1;
	num2 = n2;
    }

    MyClass(MyClass &obj) // Copy constructor
    {
	num1 = obj.num1;
	num2 = obj.num2;
    }

    void display()
    {
	cout << "num1 = " << num1 << ", ";
	cout << "num2 = " << num2 << "\n";
    }
};

int main()
{         clrscr();
    MyClass obj1;         // Default constructor
    MyClass obj2(5);      // Overloaded constructor with one argument
    MyClass obj3(10, 20); // Overloaded constructor with two arguments
    MyClass obj4(obj2);   // Overloaded constructor with object argument

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();

    cout << "Object 4: ";
    obj4.display();
    getch();
    return 0;
}
