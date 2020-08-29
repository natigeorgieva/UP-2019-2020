#include <iostream>
#include <cmath>
using namespace std;

const int LEN = 50;

struct Rect {
	float width, heigth;
};

void inputRect(Rect& rect) {
	do {
		cout << "Enter width: ";
		cin >> rect.width;
		if (rect.width <= 0) cout << "Width cannot be non positive number!" << endl;
	} while (rect.width <= 0);

	do {
		cout << "Enter heigth: ";
		cin >> rect.heigth;
		if (rect.heigth <= 0) cout << "Heigth cannot be non positive number!" << endl;
	} while (rect.heigth <= 0);
}

void inptRectArr(Rect arr[], int& len) {
	do {
		cout << "Enter the length of array ([1, " << LEN << "]): ";
		cin >> len;
		if (len <= 0 || len > LEN) {
			cout << "Length must be in range [1, " << LEN << "] !" << endl;
		}
	} while (len <= 0 || len >= LEN);

	for (int i = 0; i < len; i++) {
		inputRect(arr[i]);
	}
}

void printRect(Rect& rect) {
	cout << "Width : " << rect.width << ", Heigth : " << rect.heigth << endl;
}

void printRectArr(Rect arr[], int len) {
	for (int i = 0; i < len; i++) {
		printRect(arr[i]);
	}
}

float calcPerimeter(Rect rect) {
	return 2 * rect.heigth + 2 * rect.width;
}
float calcDiagonal(Rect rect) {
	return sqrt(pow(rect.heigth, 2) + pow(rect.width, 2));
}

void sortRectArr(Rect arr[], int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-1-i; j++) {
			if (calcDiagonal(arr[j]) > calcDiagonal(arr[j+1])) {
				Rect temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

}