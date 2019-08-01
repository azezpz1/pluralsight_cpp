// Collections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //for sort and count

using namespace std;

int main()
{
	vector<int> vi;
	for (int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}

	for (auto item : vi)
	{
		cout << item << " ";
	}
	cout << endl;

	vector<string> vs;

	cout << "enter three words ";
	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}

	for (auto item : vs)
	{
		cout << item << " ";
	}
	cout << endl;

	cout << "int vector vi has " << vi.size() << " elements." << endl;

	vi[5] = 3;
	vi[6] = -1;
	vi[1] = 99;

	//Different ways to print vi
	for (auto item:vi)
	{
		cout << item << " ";
	}
	cout << endl;

	for (unsigned int i = 0; i < vi.size(); i++)
	{
		cout << vi[i] << " ";
	}
	cout << endl;

	for (auto i = begin(vi); i != end(vi); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(begin(vs), end(vs));
	for (auto item : vs)
	{
		cout << item << " ";
	}
	cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
