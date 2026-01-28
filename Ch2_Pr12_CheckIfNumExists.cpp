#include <iostream>
using namespace std;

void search_element(int nums[], int size, int input);

int main()
{
	const int size = 5;
	int nums[size] = {4, 7, 9, 12, 15};
	int input = 0;

	cout << "Enter the number: ";
	cin >> input;

	search_element(nums, size, input);

	return 0;
}

void search_element(int nums[], int size, int input) {

	for (int index = 0; index < size; index++) {

		if (input == nums[index]) {
			cout << "Found\n";
			break;
		}
		else if (size - index == 1){
			cout << "Not Found\n";
		}
	}
}
