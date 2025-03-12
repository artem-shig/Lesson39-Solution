#include "logic.h"
int main() {

	cout << "The Sum of Numbers.\n";

	int num;
	cout << "\n Enter a number less than " << MAX_NUMBER << ": ";
	cin >> num;

	if (num > MAX_NUMBER || num <= 0) {
		cout << " Out of range.";
		return -1;
	}

	cout << " Sum of numbers: " << calc_sum_numbers(num) << endl;

	return 0;
}