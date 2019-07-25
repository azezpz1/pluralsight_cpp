#include <iostream>

using namespace std;

double add(double x, double y)
{
	return x + y;
}

double add(double a, double b, double c)
{
	return a + b + c;
}

int main()
{
	double a = add(3, 4);
	cout << "3 + 4 is " << a;

	cout << endl;

	double b = add(1.2, 3.4);
	cout << "1.2 + 3.4 is " << b;

	cout << endl;

	double c = add(1.1, 2.2, 3.3);
	cout << "1.1 + 2.2 + 3.3 is " << c;

	return 0;
}
