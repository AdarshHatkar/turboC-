/*Practical No:16 Write a program in C++ to implement parametrized constructor */

#include <iostream.h>
#include<conio.h>

class MyClass
{
public:
    int num1, num2, num3;

    MyClass(int n)
    {
	num1 = n;
	num2 = 0;
	num3 = 0;
    }

    MyClass(int n1, int n2)
    {
	num1 = n1;
	num2 = n2;
	num3 = 0;
    }

    MyClass(int n1, int n2, int n3)
    {
	num1 = n1;
	num2 = n2;
	num3 = n3;
    }

    void display()
    {
	cout << "num1 = " << num1 << ", ";
	cout << "num2 = " << num2 << ", ";
	cout << "num3 = " << num3 << "\n";
    }
};

int main()
{   clrscr();

    MyClass obj1(5);          // Parameterized  constructor with one argument
    MyClass obj2(10, 20);     // Parameterized  constructor with two arguments
    MyClass obj3(15, 25, 30); // Parameterized  constructor with Three arguments

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();
    getch();
    return 0;
}