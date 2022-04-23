#include "Circle.h"

void Circle::Square()
{
    cout << "Площадь окружности c радиусом "<<r<<" = ";
    cout << PI * r * r << endl;
}

void Circle::Sec_Square(double a)
{
    cout << "Площадь сектора в "<<a<<"° окружности с радиусом "<<r<<" = ";
    cout << (PI * r * r * a) / 360 << endl;
}
