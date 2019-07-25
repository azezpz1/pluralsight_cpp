// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int answer = 7;
	int guess;

	cout << "Please guess a number: ";
	cin >> guess;
	
	while (true)
	{
		if (guess < answer)
		{
			cout << "Your answer is to small" << endl;
		}
		else if (guess > answer)
		{
			cout << "Your answer is too big" << endl;
		}
		else
		{
			cout << "You got the answer right!" << endl;
			return 0;
		}

		cout << "Please try again: ";
		cin >> guess;
	}
}
