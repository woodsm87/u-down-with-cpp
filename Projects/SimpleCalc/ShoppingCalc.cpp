//Calculates sales tax and total cost based on the type of purchased product using the following categories and tax percentages:
//	Category 1 - Clothing: 6%
//	Category 2 - Beauty products: 7%
//	Category 3 - Grocery: 3%
//	Category 4 - Gardening: 6%
//	Category 5 - School supplies: 3%
//	Category 6 - Tobacco products: 10%
//Creates an array to store the numbers users input and uses the switch statement to calculate the sales tax and final cost based on the category of the purchased product
//Prompts the user for category and price of the product
//Calculates and displays the final cost
#include <cstring>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

using namespace std;

int main() {
	//greet user, prompt for product type selection
	//switch case to populate vector with values
	//case cat == 1: vector.add(value * 1.06), etc
	//provide "exit and sum" as default
	int sel, s, i;
	double total = 0.00, sum;
	double array_1[100];
	vector<double> array_2, array_3, array_4, array_5, array_6;
	cout << "Hello! Please select a category:" << fixed << showpoint << setprecision(2) << endl;
	cout << "1 - Clothing" << endl;
	cout << "2 - Beauty products" << endl;
	cout << "3 - Grocery" << endl;
	cout << "4 - Gardening" << endl;
	cout << "5 - School supplies" << endl;
	cout << "6 - Tobacco products" << endl;
	cout << "9 - Exit and provide total \n > ";
	cin >> sel;
	while (sel != 9) {
		switch (sel) {
			case 1:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.06;
				total += sum;
				cout << "Clothing total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n" << endl;
				break;
			case 2:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.07;
				total += sum;
				cout << "Beauty products total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n"  << endl;
				break;
			case 3:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.03;
				total += sum;
				cout << "Grocery total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n"  << endl;
				break;
			case 4:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.06;
				total += sum;
				cout << "Gardening total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n"  << endl;
				break;
			case 5:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.03;
				total += sum;
				cout << "School supplies total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n"  << endl;
				break;
			case 6:
				cout << "How many items? ";
				cin >> s;
				cout << "Please enter the costs:" << endl;
				sum = 0;
				for(i = 0; i < s; ++i) {
				        cin >> array_1[i];
				        sum += array_1[i];
				    }
				sum *= 1.10;
				total += sum;
				cout << "Tobacco products total: $" << sum << endl;
				cout << "Current purchase total: $" << total << "\n"  << endl;
				break;
			default:
				cout << "Invalid selection!" << endl;
		}
		cout << "Please make another selection:" << endl;
		cout << "1 - Clothing" << endl;
		cout << "2 - Beauty products" << endl;
		cout << "3 - Grocery" << endl;
		cout << "4 - Gardening" << endl;
		cout << "5 - School supplies" << endl;
		cout << "6 - Tobacco products" << endl;
		cout << "9 - Exit and provide total \n > ";
		cin >> sel;
	}
	cout << "Thank you for your patronage!\n"
		<< "Your total today is $" << total <<endl;
	return 0;
}
