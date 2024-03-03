#include <iostream>
using namespace std;
int main()
{
	/*int sec, min, h;
	cout << "sec: ";
	cin >> sec;
	min = sec / 60;
	sec = sec % 60;
	h = min / 60;
	min = min % 60;
	cout << "h: " << h << "\n";
	cout << "min: " << min << "\n";
	cout << "sec: " << sec << "\n";*/

	/*double number;
	int dollar, cent;
	cout << "number : "; cin >> number;
	dollar = number;
	cent = (number - dollar) * 100;
	cout << dollar << " dollars " << cent << " cents";*/

	/*int d, w;
	cout << "days : "; cin >> d;
	w = d / 7;
	d = d % 7;
	cout << "weeks: " << w << "\n";
	cout << "days: " << d;*/

	double speed, distance, time;
	int minutes, seconds;
	cout << "Calculating running speed." << "\n";
	cout << "Enter the length of distance(meters) = ";
	cin >> distance;
	cout << "Enter time(min.sec) = ";
	cin >> time;
	minutes = time;
	seconds = (time - minutes) * 100;
	time = (minutes * 60) + seconds;
	speed = distance / time * 3.6;
	cout << "Distance: " << distance << "m\n";
	cout << "Time: " << minutes << "min " <<
		seconds << "sec = " << time <<
		"seconds\n";
	cout << "You were running at speed " <<
		speed << "km/h\n";
}
