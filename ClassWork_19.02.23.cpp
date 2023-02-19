#include <iostream>
#include <iomanip>
#include <cmath>
#include "StudentInput.h"
using namespace std;

int main()
{
	int choice;
	cout << "\tMENU\n";
	cout << "  1. Add student`s data ......  1\n";
	cout << "  2. Add a grade   ...........  2\n";
	cout << "  3. Output list  ............  3\n";
	cout << "  4. Student`s grades  .......  4\n";
	cout << "  5. Debtor students  ........  5\n";
	cout << "-> ";
	cin >> choice;
	switch (choice) {
	case 1: (choice == 1); {
		FIO student = input();
		break;
	};
	case 2: (choice == 2); {

		break;
	};
	case 3: (choice == 3); {

		break;
	};
	case 4: (choice == 4); {

		break;
	};
	}


}

FIO input() {
	cout << "Please, input yout data" << endl;
	FIO s;
	int temp = 0, ave = 0;
	cout << "1. Name: ";
	cin >> s.name;
	cout << "2. Surname: ";
	cin >> s.surname;
	cout << "3. Grades` list: ";
	for (int i = 0; i < 10; i++) {
		cin >> s.marks[i];
		temp += s.marks[i];
		ave = temp / 10;
	};
	cout << "4. Average: " << ave << endl;
	if (ave >= 4)
		cout << "5. Exam is accepted\n";
	else
		cout << "5. Exam is not accepted\n";
	return s;
}
