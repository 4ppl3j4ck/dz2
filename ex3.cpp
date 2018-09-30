#include <iostream>
using namespace std;
int main()
{
 double kilometer,liter;
 const double sto = 100;
 cout << "Enter the number of kilometers traveled: ";
 cin >> kilometer;
 cout << "Enter the number of liters consumed: ";
 cin >> liter;
 cout << "Your fuel consumption: " << liter/(kilometer/sto);
 return 0;
}
