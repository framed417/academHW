#include <iostream>
using namespace std;
int main()
{
	/*double R1, R2, R3;
	cout << "Enter r1: ";
	cin >> R1;
	cout << "Enter r2: ";
	cin >> R2;
	cout << "Enter r3: ";
	cin >> R3;
	double R0 = 1 / R1 + 1 / R2 + 1 / R3;
	cout << "R0 = " << R0 << "\n";
	return 0;*/

	/*const int pi = 3.14;
	double s, l, r;
	cout << "l= ";
	cin >> l;
	r = l / (2 * pi);
	s = pi * r * r;
	cout << "s= " << s;*/

	double v, t, a;
	cout << "v= "; cin >> v;
	cout << "t= "; cin >> t;
	cout << "a= "; cin >> a;
	double s = v * t + (a * t * t) / 2;
	cout << "s= " << s;
}