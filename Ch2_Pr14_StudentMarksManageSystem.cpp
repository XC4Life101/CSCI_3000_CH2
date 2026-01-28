#include <iostream>
#include <string>
using namespace std;

void display(int marks[], int size);
void total(int marks[], int size);
void avg(int marks[], int size);
void passed(int marks[], int size);
void high(int marks[], int size);
void close(int marks[], int size);

int main()
{
	const int size = 5;
	int marks[size];
	int quit = 0;

	cout << "Enter marks for 5 students: \n";

	for (int i = 0; i < size; i++) {
		cout << "Student " << (i + 1) << ": ";
		cin >> marks[i];
	}

	do {
		int key = 0;

		cout << "\n\n========== Student Marks Menu ==========\n"
			 << "1. Display all marks\n"
			 << "2. Find total marks\n"
			 << "3. Find average marks\n"
			 << "4. Count passed students (pass mark >= 40)\n"
			 << "5. Find highest mark\n"
			 << "6. Exit\n"
			 << "Enter your choice: ";
		cin >> key;

		switch (key){
		case 1:
			display(marks, size);
			break;
		case 2:
			total(marks, size);
			break;
		case 3:
			avg(marks, size);
			break;
		case 4:
			passed(marks, size);
			break;
		case 5:
			high(marks, size);
			break;
		case 6:
			close(marks, size);
			quit = 1;
			break;
		default:
			cout << "\nTry again";
			break;
		}

	} while (quit == 0);
}

void display(int marks[], int size) {
	
	string list = "";

	for (int i = 0; i < size; i++) {
		list = list + " " + to_string(marks[i]);
	}
	
	cout << "\nMarks for all students:" << list;
}

void total(int marks[], int size){

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}

	cout << "\nTotal marks = " << sum;
}

void avg(int marks[], int size){

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}

	cout << "\nAverage marks = " << (sum / size);
}

void passed(int marks[], int size){

	int count = 0;

	for (int i = 0; i < size; i++) {

		if (marks[i] >= 40) {
			count++;
		}
	}

	cout << "\nPassed students = " << count;
}

void high(int marks[], int size){

	int max = 0;

	for (int i = 0; i < size; i++) {

		if (marks[i] > max) {
			max = marks[i];
		}
	}

	cout << "\nHighest mark = " << max;
}

void close(int marks[], int size) {

	cout << "\nExiting . . . Goodbye!\n\n";

}