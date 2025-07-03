#include "logic.h"

bool is_perfect_number(int number) {

	if (number <= 1 || number % 2 != 0) {
		return false;
	}

	int sum = 0;

	for (int i = number / 2; i >= 1; i--)
	{
		if (number % i == 0) {
			sum += i;
		}
		if (sum > number) {
			return false;
		}
	}

	return number == sum;
}