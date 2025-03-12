#include "logic.h"

bool is_perfect_number(int number) {

	if (number <= 1) {
		return false;
	}

	int n = number / 2;
	int s = 1;

	for (int i = 2; i <= n; i++)
	{
		if (number % i == 0) {
			s += i;
		}
	}

	return number == s;
}