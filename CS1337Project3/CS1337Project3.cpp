#include <iostream>
#include <fstream>

using namespace std;

int checkOdd();
void createSquare(int **);
void writeToFile(int **);

int main() {
	while (true) {
		int magicalNumber = checkOdd();
		int **magicalArray = new int*[magicalNumber];

		for (int i = 0; i < magicalNumber; i++) {
			magicalArray[i] = new int[magicalNumber];
		}

		if (magicalNumber == 0) {
			break;
		}
	}
}

int checkOdd() {
	while (true) {
		int foo;

		cout << "Please input an odd number greater than 0" << endl;
		cin >> foo;

		if (foo < 0) {
			continue;
		} 
		else if (foo % 2 || foo == 0) {
			return foo;
		}
	}
}

void createSquare(int **arr) {

}