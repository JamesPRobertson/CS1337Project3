#include <iostream>

using namespace std;

bool checkInputIntegrity(int);
int checkOdd();

int main() {
	int yash;

	hai:
	cout << "Hey put in a number that happens to be odd kthx" << endl;
	cin >> yash;

	if (checkInputIntegrity(yash)) {
		cout << "Good job!" << endl;
	}
	else {
		goto hai;
	}
}

bool checkInputIntegrity(int foo) {
	return foo % 2;
}

int checkOdd() {
	while (true) {
		int foo;

		cout << "Please input a number retard" << endl;
		cin >> foo;

		if (foo % 2) {
			return foo;
		}
	}
}