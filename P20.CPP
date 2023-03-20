/*Practical No:20 Write a program in C++ for implement array of object */

#include <iostream.h>
#include<conio.h>

class Employee
{
public:
    int e_id;
    char name[20];
    void input()
    {
	cout << "Enter Employee Id : ";
	cin >> e_id;

	cout << "Enter Employee Name : ";
	cin >> name;
    }

    void output()
    {
	cout << "  "<< e_id << "  -  " << name << "\n";
    }
};

int main()
{   clrscr();
    Employee emp[5];
    cout << "-------- Reading Data -----------\n";
    for (int i = 0; i < 5; i++)
    {
	emp[i].input();
    }
    cout << "---------------------------------\n";
    cout << "------- Displaying Data ---------\n";
    cout << "  E_Id  -  Name \n";
	for (int j = 0; j < 5; j++)
    {
	emp[j].output();
    }
    cout << "---------------------------------\n";
    getch();
    return 0;
}