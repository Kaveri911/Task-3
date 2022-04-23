#include <iostream>;
#include "Vector.h";
#include "Circle.h"
#include "Complex.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "rus");
    Circle d = { 5 };
    d.Square();
    d.Sec_Square(20);
    Vector a = {2,4};
    Vector b = {-2,-4}; 
    a.Print_Vector();
    b.Print_Vector();
   cout<< a.Get_Length()<<endl;
   a.Get_Mult(5).Print_Vector();
   a.Get_Sum(b).Print_Vector();
   cout << a.Get_Sclr(b) << endl;
   Complex n1 = { 3,5 };
   Complex n2 = { 2,6 };
   cout << "Сумма "; n1.printComplex(); cout << " и "; n2.printComplex(); cout << " = "; n1.Sum(n2).printComplex();
    cout << endl;
    cout << "Произведение "; n1.printComplex(); cout << " и "; n2.printComplex(); cout << " = ";n1.Multiply(n2).printComplex();
    cout << endl;
    cout << "Частное "; n1.printComplex(); cout << " на "; n2.printComplex(); cout << " = "; n1.Divide(n2).printComplex();

}

