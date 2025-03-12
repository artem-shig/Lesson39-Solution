#include "util.h"
#define BUF 10

int main() {

	cout << "The Reversing Vector Elements.\n";

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);

	string reversedArray = "";

	cout << "Array: " << convert(arr, size, reversedArray) << endl;

	cout << "Reversed array: " << reversedArray << endl;

	return 0;
}