#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = add(3, 4);
	cout << "3 + 4 is " << a;

	cout << endl;

	double b = add(1.2, 3.4);
	cout << "1.2 + 3.4 is " << b;

	return 0;
}
