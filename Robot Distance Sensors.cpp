#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int distance[size];


	for (int sensor = 0; sensor < size; sensor++) {
		cout << "Enter the munber: ";

		cin >> distance[sensor];
	}

	cout << "\nPrinting the values";

	for (int sensor = 0; sensor < size; sensor++) {

		cout << distance[sensor];
	}
	
	int first_reading = distance[0];
	int last_reading = distance[size - 1];

	cout << "\n\nFirst value: " << first_reading << "\n\nLast Value: " << last_reading << endl;
}

