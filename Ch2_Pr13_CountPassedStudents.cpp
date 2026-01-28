#include <iostream>
using namespace std;

int count_pass(int marks[], int size);

int main()
{
	const int size = 5;
	int marks[size] = { 35, 78, 40, 22, 98 };
	int count = (count_pass(marks, size));

	cout << "Number of students who passed: " << count << endl;
	
	return 0;
}

int count_pass(int marks[], int size) {
	int count = 0;

	for (int index = 0; index < size; index++) {

		if (marks[index] >= 40) {
			count++;
		}
	}

	return count;
}
