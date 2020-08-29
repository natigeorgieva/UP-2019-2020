#include <iostream>
using namespace std;

const int ROWS = 50, COLUMNS = 50;

void inptMatrix(int matrix[][COLUMNS], int& inptRows, int& inptColumns);
void findGoodNums(int matrix[][COLUMNS], int rows, int columns);
void findGoodNums(int matrix[][COLUMNS], int rows, int columns);

int main() {
	int matrix[ROWS][COLUMNS], rows, columns;

	inptMatrix(matrix, rows, columns);
	findGoodNums(matrix, rows, columns);

}

bool isGood(int num) {
	while (num % 3 == 0) {
		num = num / 3;
	}

	while (num % 5 == 0) {
		num = num / 5;
	}

	return num == 1;
}

void inptMatrix(int matrix[][COLUMNS], int& inptRows, int& inptColumns) {

	do {
		cout << "Enter number of rows ([1, " << ROWS << "]): ";
		cin >> inptRows;
		if (inptRows <= 0 || inptRows > ROWS) {
			cout << "Rows must be in range [1, " << ROWS << "] !" << endl;
		}
	} while (inptRows <= 0 || inptRows >= ROWS);

	do {
		cout << "Enter number of columns ([1, " << COLUMNS << "]): ";
		cin >> inptColumns;
		if (inptColumns <= 0 || inptColumns > COLUMNS) {
			cout << "Rows must be in range [1, " << COLUMNS << "] !" << endl;
		}
	} while (inptColumns <= 0 || inptColumns >= COLUMNS);

	for (int i = 0; i < inptRows; i++) {
		for (int j = 0; j < inptRows; j++) {
			cin >> matrix[i][j];
		}
	}
}

void findGoodNums(int matrix[][COLUMNS], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (isGood(matrix[i][j])) {
				cout << "Found good num " << matrix[i][j] << " at (" << i << ", " << j << ")" << endl;
			}
		}
	}
}