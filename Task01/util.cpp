#include "util.h"

void init(int* arr, int size, int a, int b) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
	}

}

string convert(int* arr, int size, string& reversedArray) {

	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(arr[i]) + " ";
		reversedArray = to_string(arr[i]) + " " + reversedArray;
	}

	return s;
}