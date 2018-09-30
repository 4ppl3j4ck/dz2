#include <iostream>
using namespace std;
int main()
{
double feet,inch,metre,pound,kilogram;
const short i_f = 12;
const double m_i = 0.0254;
const double k_p = 2.2;
cout.setf (ios_base::fixed);
cout << "Enter your height in feet: \b";
cin >> feet;
cout << "and inches: ";
cin >> inch;
inch = inch + i_f*feet;
metre = inch*m_i;
cout << "Enter your weight in pounds: ";
cin >> pound;
kilogram = pound/k_p;
cout << "Body mass index = " << kilogram/(metre*metre);
return 0;
}
