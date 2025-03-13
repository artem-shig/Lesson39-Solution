#include "logic.h"

bool is_perfect_number(int number) {

	if (number <= 1) {
		return false;
	}

	int s = 0;

	for (int i = number / 2; i >= 1; i--)
	{
		if (number % i == 0) {
			s += i;
		}
		if (s > number) {
			return false;
		}
	}

	return number == s;
}