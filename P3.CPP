/*Practical No:3  Write a program in C++ to demonstrate Inline function */

#include <iostream.h>
#include <conio.h>


inline int square(int n)
{
    return n * n;
}

inline int cube(int n)
{
    return n * n * n;
}

int main()
{ clrscr();
    int number = 5;
    cout << "\n square of " << number << " is " << square(number);

    cout << "\n cube of " << number << " is " << cube(number);
    getch();
    return 0;
}