#include <iostream>
#include <string>
using namespace std;

void display(int daily[], int days);
void total(int daily[], int days);
void avg(int daily[], int days);
void high(int daily[], int days);
void count(int daily[], int days);

int main()
{
	const int days = 7;
	int daily [days] ;
	int quit = 0;

	cout << "Enter electricity usage for 7 days: \n";

	for (int i = 0; i < days; i++) {
		cout << "Day " << (i + 1) << ": ";
		cin >> daily[i];
	}

	do {
		int key = 0;

		cout << "\n\n========== Electricity Usage Menu ==========\n"
			<< "1. Display daily usage\n"
			<< "2. Total weekly usage\n"
			<< "3. Average usage\n"
			<< "4. Highest usage\n"
			<< "5. Count days above 10 units\n"
			<< "6. Exit\n"
			<< "Enter your choice: ";
		cin >> key;

		switch (key) {
		case 1:
			display(daily, days);
			break;
		case 2:
			total(daily, days);
			break;
		case 3:
			avg(daily, days);
			break;
		case 4:
			high(daily, days);
			break;
		case 5:
			count(daily, days);
			break;
		case 6:
			cout << "\nExiting... Goodbye!\n\n";
			quit = 1;
			break;
		default:
			cout << "\nTry again";
			break;
		}

	} while (quit == 0);

	return 0;
}

void display(int daily[], int days){

	string list = "";

	for (int i = 0; i < days; i++) {
		list = list + " " + to_string(daily [i] );
	}

	cout << "\nDaily electricity usage:" << list;

}

void total(int daily[], int days){

	int sum = 0;

	for (int i = 0; i < days; i++) {
		sum += daily [i] ;
	}

	cout << "\nTotal weekly usage = " << sum;

}

void avg(int daily[], int days){

	float sum = 0;

	for (int i = 0; i < days; i++) {
		sum += daily [i] ;
	}

	cout << "\nAverage daily usage = " << (sum / days);
}

void high(int daily[], int days){

	int max = 0;

	for (int i = 0; i < days; i++) {

		if (daily[i] > max) {
			max = daily[i];
		}
	}

	cout << "\nHighest usage = " << max;
}

void count(int daily[], int days){

	int count = 0;

	for (int i = 0; i < days; i++) {

		if (daily[i] > 10) {
			count++;
		}
	}

	cout << "\nDays above 10 units = " << count;
}
