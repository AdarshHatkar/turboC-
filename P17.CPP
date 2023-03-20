/*Practical No:17 Write a program in C++ to implement copy constructor */

#include <iostream.h>
#include <string.h>
#include<conio.h>

class Person
{
public:
    int age;
    char name[20];
    Person()
    {
    }
    Person(Person &obj)
    {
	age = obj.age;
	/*below line wont work because we cant assign direct value to the array so we using string function*/
	//  name = obj.name;
	strcpy(name, obj.name);
    }
    void input()
    {
	cout << "Enter Name : ";
	cin >> name;

	cout << "Enter Age : ";
	cin >> age;
    }
    void display()
    {
	cout << "Name = " << name << ", ";
	cout << "Age = " << age << "\n";
    }
};

int main()
{   clrscr();
    Person obj1;
    obj1.input();
    cout << "--------------- obj1 Data --------------- \n";
    obj1.display();
    /*creating object 2 using copy constructor*/
    Person obj2(obj1);
     cout << "--------------- obj2 Data --------------- \n";
    obj2.display();

    getch();
    return 0;
}
