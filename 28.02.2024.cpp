﻿#include <iostream>
using namespace std;
int main()
{
	//1
	/*int number, digit, userChoice, nDigits, nZeros;
	float sum, mean;
	sum = 0;
	nDigits = 0;
	nZeros = 0;
	cout << "Please, enter your number:\n";
	cin >> number;
	do {
		cout << "Your choice:\n";
		cout << "1 - number of digits\n";
		cout << "2 - sum of digits\n";
		cout << "3 - mean\n";
		cout << "4 - number of zeros\n";
		cout << "5 - quit\n";
		cin >> userChoice;
		while (number > 0)
		{
			digit = number % 10;
			sum += digit;
			nDigits++;
			if (digit == 0)
			{
				nZeros++;
			}
			number = number / 10;
		}
		mean = sum / nDigits;
		switch (userChoice) {
		case 1:
		{
			cout << "Calculating the number of digits...\n";
				cout << nDigits << "\n";
			break;
		}
		case 2:
		{
			cout << "Calculating the sum of digits...\n";
				cout << sum << "\n";
			break;
		}
		case 3:
		{
			cout << "Calculating the mean...\n";
			cout << mean << "\n";
			break;
		}
		case 4:
		{
			cout << "Calculating the number of zeros...\n";
				cout << nZeros << "\n";
			break;
		}
		case 5:
		{
			cout << "See you!";
			break;
		}
		default:
			cout << "Wrong menu item!";
		}
	} while (userChoice != 5);*/

	//2
	/*int cellSize;
	cout << "Input cell size:\n";
	cin >> cellSize;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			for (int m = 0; m < cellSize; m++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (j % 2 == 0)
					{
						for (int k = 0; k < cellSize; k++)
						{
							cout << "*";
						}
					}
					else
					{
						for (int k = 0; k < cellSize; k++)
						{
							cout << "-";
						}
					}
				}
				cout << "\n";
			}
		}
		else {
			for (int m = 0; m < cellSize; m++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (j % 2 == 0)
					{
						for (int k = 0; k < cellSize; k++)
						{
							cout << "-";
						}
					}
					else
					{
						for (int k = 0; k < cellSize; k++)
						{
							cout << "*";
						}
					}
				}
				cout << "\n";
			}
		}
	}*/
	
	//4
	cout << "  ";
	for (char c = 'A'; c <= 'J'; ++c) {
		cout << c << " ";
	}
	cout << endl;
	
	for (int row = 0; row < 10; ++row) {
		cout << row << " ";
		for (int col = 0; col < 10; ++col) {
			cout << col << " ";
		}
		cout << endl;
	}
	
}