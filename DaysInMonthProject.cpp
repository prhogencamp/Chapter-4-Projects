// Chapter 4 Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	bool leapYear = 0;
	int monthChosen;
	cout << "Please enter the month you would like to check:" << endl;
	cin >> monthChosen;
	if (monthChosen > 0 and monthChosen <= 12) 
	{
		int yearChosen;
		cout << "Please enter the year you would like to check:" << endl;
		cin >> yearChosen;
		if (yearChosen % 4 == 0)
		{
			leapYear = 1;
			if (yearChosen % 100 == 0)
			{
				if (yearChosen % 400 == 0)
				{
					leapYear = 1;
				}
			}
		}
		else
		{
			leapYear = 0;
		}
		cout << leapYear << endl;



		if (monthChosen == 2)
		{
			if (leapYear == 1)
			{
				cout << "29 Days" << endl;
			}
			else
			{
				cout << "28 Days" << endl;
			}
		}
		else if (monthChosen == 1 || monthChosen == 3 || monthChosen == 5 || monthChosen == 7 || monthChosen == 8 || monthChosen == 10 || monthChosen == 12)
		{
			cout << "31 Days" << endl;
		}
		else if (monthChosen == 4 || monthChosen == 6 || monthChosen == 9 || monthChosen == 11)
		{
			cout << "30 Days" << endl;
		}

	}
	if (monthChosen > 12)
	{
		cout << "That month does not exist. Terminating" << endl;
	}
	
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
