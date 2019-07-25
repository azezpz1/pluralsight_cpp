// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int answer = 7;
	int guess;

	cout << "Please guess a number:";
	cin >> guess;
	
	while (true)
	{
		if (guess < answer)
		{
			cout << "Your answer is to small";
		}
		else if (guess > answer)
		{
			cout << "Your answer is too big";
		}
		else
		{
			cout << "You got the answer right!";
			return 0;
		}

		cout << "Please try again: ";
		cin >> guess;
	}
}
