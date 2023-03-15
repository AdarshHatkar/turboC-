/*Practical No:6 Write a program in C++ for unary operator overloading. */

#include <iostream.h>
#include<conio.h>

class Demo
{
public:
    int a, b, c;

    void input()
    {
	cout << "Enter a,b,c \n";
	cin >> a >> b >> c;
    }
    void display()
    {
	cout << "\n \n a : " << a;
	cout << "\n b : " << b;
	cout << "\n c : " << c;
    }

    /* operator overloading methods*/
    void operator-()
    {
	a = -a;
	b = -b;
	c = -c;
    }

    void operator--()
    {
	 a--;
	 b--;
	 c--;
    }
    void operator++()
    {
	 a++;
	 b++;
	 c++;
    }
};

int main()
{     clrscr();

    Demo obj;
    obj.input();
    obj.display();

    -obj;
    obj.display();

    --obj;
    obj.display();

    ++obj;
    obj.display();


    getch();
    return 0;
}