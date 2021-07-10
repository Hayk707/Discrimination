
#include "diskriminat.hpp"


void DIS()
{
	double a,b,c,d,x1,x2,x;

	cout <<"Rate a/n";
	cin >> a;
	cout <<"Rate b/n";
	cin >> b;
	cout <<"Rate c/n";
	cin >> c;

	if (a != 0){

	double	d = b * b - 4 * a * c;

	if (d < 0) {
		cout << "Has no solution";
	}
	else if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	if (d == 0) {
		x = ((-b) + sqrt(d)) / (2 * a);
		cout << x;
	}
	
	}else if (a == 0) {
		x = (-c) / b;
		cout << x;
	}
}
