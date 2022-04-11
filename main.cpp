#include <iostream>
#include "Complex.h"
#include <math.h>
using namespace std;

int main()
{
	TComplex c1(3, 5);
	TComplex c2;
	TComplex c3 = c2;
	cin >> c2;
	c1.SetRe(10);
	cout << c1.GetRe() << "+i*" << c1.GetIm() << endl;
	c3 = c1 + c2;
	cout << c3 <<endl;
	c2 = c3 - c1;
	cout << c2 <<endl;
	if (c1 == c2)
	cout << "com1 = com2\n";
	c3 = c2 * c1;
	cout << c3 <<endl;
	c3 = c1 / c2;
	cout << c3 <<endl;
 
	return 0;

}