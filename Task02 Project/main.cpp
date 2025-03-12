#include "logic.h"

int main() {

	cout << "The Perfect Number.\n";

	int number;
	cout << "Enter your number: ";
	cin >> number;

	string msg = is_perfect_number(number) ? "is" : "is not";

	cout << number << " - " << msg << " Perfect number.\n";

	return 0;
}