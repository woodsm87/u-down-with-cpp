//******************************************************************************
//	Author: Matt Woods
//
//1. Asks the user to enter 3 integers
//2. Obtains the numbers from the user
//3. Prints the largest number and then the smallest of the numbers
//4. If the numbers are equal, prints the message : "These numbers are equal."
//5. Prints the sum, average, and product of the 3 numbers
//******************************************************************************

#include <iostream>
#include <algorithm>

using namespace std;

bool isLesser(int a, int b) {
	return (a < b);
}

int main() {
	int numOne, numTwo, numThree, top, bot, sum, avg, prod;

	cout << "Please enter three integers:" << endl; // Step 1
	cout << "1. "; // Step 2
	cin >> numOne;
	cout << "2. ";
	cin >> numTwo;
	cout << "3. ";
	cin >> numThree;

	top = max({ numOne, numTwo, numThree }, isLesser);
	bot = min({ numOne, numTwo, numThree }, isLesser);
// should inputs be stored as array/vector?

	cout << "Here are the highest and lowest of those numbers:" << endl; // Step 3
	cout << "Maximum = " << top << endl;
	cout << "Minimum = " << bot << endl;

	if (top == bot) {
		cout << "These numbers are equal." << endl; // Step 4
	}

	sum = numOne + numTwo + numThree;
	avg = sum / 3;
	prod = numOne * numTwo * numThree;

	cout << "Here are the mathematical mutations of those numbers:" << endl; // Step 5
	cout << "Sum = " << sum << endl;
	cout << "Average = " << avg << endl;
	cout << "Product = " << prod << endl;

	system("pause");

	return 0;
}


