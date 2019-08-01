#include <iostream>
#include <string>

#include "Functions.h"

using namespace std;

int main()
{
	string name;
	cout << "who are you? ";
	cin >> name;
	string greeting = "Hello, " + name;
	if (name == "Anthony")
	{
		greeting += ", I know you!";
	}

	cout << greeting << endl;

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
