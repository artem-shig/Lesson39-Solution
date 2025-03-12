#include "logic.h"

int calc_sum_numbers(int num) {

	int sumNumbers = 0;

	for (int i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) {
			sumNumbers += i;
		}
	}

	return sumNumbers;
}