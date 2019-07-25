#include <iostream>

using namespace std;

double add(double x, double y)
{
	return x + y;
}

int main()
{
	double a = add(3, 4);
	cout << "3 + 4 is " << a;

	cout << endl;

	double b = add(1.2, 3.4);
	cout << "1.2 + 3.4 is " << b;

	return 0;
}
