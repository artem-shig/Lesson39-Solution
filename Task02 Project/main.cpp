#include "logic.h"

int main() {

	cout << "The Perfect Number.\n";

	int number;

	do {
		cout << "Enter your number: ";
		cin >> number;
	} while (number % 2 != 0);

	string msg = is_perfect_number(number) ? "is" : "is not";

	cout << number << " - " << msg << " perfect number.\n";

	return 0;
}