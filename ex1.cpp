#include <iostream>
using namespace std;
int main()
{
 int growth;
 cout << "Enter your growth in sm:___\b\b\b";
 const char k = 100;
 cin >> growth;
 cout << "Your growth:" << endl << growth/k << " m" << endl << growth%k << " sm" << endl;
 return 0;
}
