/*Practical No:6 Write a program in C++ for Binary operator overloading. */

#include <iostream.h>
#include<conio.h>
class Complex
{
public:
    int r, i;

    void input()
    {
        cout << "\n Enter r: ";
        cin >> r;
        cout << "\n Enter i: ";
        cin >> i;
    }
    void output()
    {

        cout << "   " << r << " + " << i << "i \n";
    }

    /*over loading function below*/

    Complex operator+(Complex x)
    {
        // creating new object to return
        Complex y;
        y.r = r + x.r;
        y.i = i + x.i;

        return y;
    }
};

int main()
{clrscr();
    Complex obj1, obj2, obj3;
    cout << "Enter values for first imaginary Number \n";
    obj1.input();
    cout << "Enter values for second imaginary Number \n";
    obj2.input();
    obj3 = obj1 + obj2;
    cout << " -----------------------------\n";
    obj1.output();
    cout << "+ \n";
    obj2.output();
    cout << " ______________________________\n";
    obj3.output();
     getch();
    return 0;
}