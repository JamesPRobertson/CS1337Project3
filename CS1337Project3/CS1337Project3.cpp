#include <iostream>
#include <fstream>

using namespace std;

int checkOdd();
void createSquare(int **, int);
void writeToFile(int **, int);



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

		createSquare(magicalArray, magicalNumber);

		for (int i = 0; i < magicalNumber; i++) {
			for (int x = 0; x < magicalNumber; x++) {
				cout << magicalArray[i][x] << " ";
			}
			cout << endl;
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

void createSquare(int **arr, int arrLength) {
	int x = arrLength / 2 + 1;
	int y = 0;

	arr[x][y] = 1;

	for (int i = 0; i < arrLength; i++) {
		for (int x = 0; x < arrLength; x++) {
			arr[i][x] = -1;
		}
	}
	
	for (int i = 1; i <= arrLength * arrLength; i++) {
		int newX = x + 1;
		int newY = y + 1;

		if (newX > arrLength - 1) {
			newX = 0;
		}
		if (newY > arrLength - 1) {
			newY = 0;
		}
		if (arr[newX][newY] == -1) {
			arr[newX][newY] = i;
		}
		else {
			newY = y - 1;

			if (newY < 0) {
				newY = arrLength - 1;
			}

			arr[newX][newY] = i;
		}

		x = newX;
		y = newY;
	}
}
