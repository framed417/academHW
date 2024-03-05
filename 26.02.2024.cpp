#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//1
    /*int a;
    int sum = 0;

    cout << "Enter num: ";
    cin >> a;

    if (a > 500) {
        std::cout << "The value cannot exceed 500." << endl;
        return 1;
    }

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "The sum of the numbers from " << a << " up to 500 is equal to: " << sum << endl;*/

    //2
    /*int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    double result = pow(x, y);

    cout << x << " to the extent of " << y << " equally: " << result << endl;*/

    //3
    /*int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        count++;
    }
    double average = sum / count;
    cout << "The arithmetic mean of all numbers from 1 to 1000: " << average << endl;*/

    //4
    /*int a;
    int b = 1;

    cout << "Enter the integer a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Error, the value of a must be in the range from 1 to 20." << endl;
        return 1;
    }

    for (int i = a; i <= 20; ++i) {
        b *= i;
    }

    cout << "The product of all numbers from " << a << " up to 20 is equal to: " << b << endl;*/

    //5
    int a;

    cout << "Enter num: ";
    cin >> a;

    for (int i = 1; i <= 10; ++i) {
        cout << a << " x " << i << " = " << a * i << endl;
    }

}