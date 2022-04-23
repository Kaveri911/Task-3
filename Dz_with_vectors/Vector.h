#ifndef VECTOR_H_
#define VECTOR_H_
using namespace std;
#include <iostream>;
struct Vector
{
	double x = 0;
	double y = 0;

	double Set_x();
	double Set_y();
	void Print_Vector();
	Vector Get_Mult(double k);
	double Get_Sclr(Vector n1);
	Vector Get_Sum(Vector n1);
	double Get_Length();

};

#endif