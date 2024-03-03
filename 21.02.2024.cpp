#include <iostream>
using namespace std;

int main()
{
	/*int userNumber, d1, d2, d3, d4, d5, d6, sum1,
		sum2, temp;
	cout << "Please, enter your 6-digit number:\n";
	cin >> userNumber;
	if (userNumber / 100000 < 1)
	{
		cout << "Your number includes less than "
			"6 digits!\n";
	}
	else if (userNumber / 100000 > 9)
	{
		cout << "Your number includes more than "
			"6 digits!\n";
	}
	else
	{
		cout << "Your number is six digits\n";
		d6 = userNumber % 10;
		temp = userNumber / 10;
		d5 = temp % 10;
		temp = temp / 10;
		d4 = temp % 10;
		temp = temp / 10;
		d3 = temp % 10;
		temp = temp / 10;
		d2 = temp % 10;
		d1 = temp / 10;
		cout << d1 << " " << d2 << " " << d3 << " ";
		cout << d4 << " " << d5 << " " << d6;
		sum1 = d1 + d2 + d3;
		sum2 = d4 + d5 + d6;
		if (sum1 == sum2)
		{
			cout << " lucky";
		}
		else
		{
			cout << " not a lucky one";
		}
	}*/

	/*int userNumber, d1, d2, d3, d4, newNumber, temp;
	cout << "Please, enter your 4-digit number:\n";
	cin >> userNumber;
	if (userNumber / 1000 < 1)
	{
		cout << "Not a four-digit number\n";
	}
	else if (userNumber / 1000 > 9)
	{
		cout << "Not a four-digit number\n";
	}
	else
	{
		cout << "Your number is four digits\n";
		d4 = userNumber % 10;
		temp = userNumber / 10;
		d3 = temp % 10;
		temp = temp / 10;
		d2 = temp % 10;
		d1 = temp / 10;
		cout << "Your number in digits: \n";
		cout << d1 << " " << d2 << " " << d3 << " ";
		cout << d4 << "\n";
		newNumber = d2 * 1000 + d1 * 100 + d4 *
			10 + d3;
		cout << "Your new number: " << newNumber;
	}*/

	/*cout << "Home task #4.1.3\n\n";
	int d1, d2, d3, d4, d5, d6, d7, maxNumber;
	cout << "1st number:\n";
	cin >> d1;
	cout << "2nd number:\n";
	cin >> d2;
	cout << "3d number:\n";
	cin >> d3;
	cout << "4th number:\n";
	cin >> d4;
	cout << "5th number:\n";
	cin >> d5;
	cout << "6th number:\n";
	cin >> d6;
	cout << "7th number:\n";
	cin >> d7;
	if (d1 > d2)
	{
		maxNumber = d1;
	}
	else
	{
		maxNumber = d2;
	}
	if (d3 > maxNumber)
	{
		maxNumber = d3;
	}
	if (d4 > maxNumber)
	{
		maxNumber = d4;
	}
	if (d5 > maxNumber)
	{
		maxNumber = d5;
	}
	if (d6 > maxNumber)
	{
		maxNumber = d6;
	}
	if (d7 > maxNumber)
	{
		maxNumber = d7;
	}
	cout << "Max number: " << maxNumber;*/

	double distance_AB, distance_BC, cargo_weight;
	cout << "Enter the distance between points A and B (in km): ";
	cin >> distance_AB;
	cout << "Enter the distance between points B and C (in km):";
	cin >> distance_BC;
	cout << "Enter the weight of the cargo (in kg): ";
	cin >> cargo_weight;

	double fuel_needed = 0;

	if (cargo_weight <= 500) {
		fuel_needed = distance_AB + distance_BC;
	}
	else if (cargo_weight <= 1000) {
		fuel_needed = 1 * distance_AB + 4 * distance_BC;
	}
	else if (cargo_weight <= 1500) {
		fuel_needed = 1 * distance_AB + 4 * distance_BC;
	}
	else if (cargo_weight <= 2000) {
		fuel_needed = 1 * distance_AB + 4 * distance_BC;
	}
	else {
		cout << "The aircraft will not lift a load of more than 2000 kg. Flight is impossible." << endl;
	}

	double fuel_capacity = 300;
	if (fuel_needed <= fuel_capacity) {
		cout << "Refueling at point B is not required. The plane will fly from point A to point C." << endl;
	}
	else {
		double refuel_required = fuel_needed - fuel_capacity;
		cout << "It is necessary to refuel the aircraft at point B on " << refuel_required << " liters of fuel." << endl;
	}

}
