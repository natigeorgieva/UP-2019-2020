#include <iostream>
#include <cmath>
using namespace std;

bool isInRegion(double x, double y) {

	if (sqrt(x * x + y * y) <= 1 / 2 && !(x < 0 && y < 0)) {
		return true;
	}

	if (x >= -4 && x <= 0 && y >= -2 && y <= 2) {
		if (sqrt(x * x + y * y) >= 2) {
			y = abs(y);
			if (y <= 2 && y >= -x - 2) {
				return true;
			}
		}
	}

	return false;
}

bool isPalindrome(int num) {
	int copy = num;
	int rev = 0;

	string str;
	while (copy) {
		str +=  copy % 10;
		rev = rev * 10 + copy % 10;
		copy /= 10;
	}

	while (num) {
		if (num % 10 != rev % 10) {
			return false;
		}

		num /= 10;
		rev /= 10;
	}

	return true;
}

bool isGood(int num, int num1=-1, int num2=-1) {
	if (num == 0) {
		if (num1 != -1 && num2 != -1) {
			return true;
		}
		return false;
	}

	if (num1 == -1) {
		num1 = num % 10;
		num /= 10;
		return isGood(num, num1, num2);
	}

	if (num2 == -1 && num1 != num%10) {
		num2 = num % 10;
		num /= 10;
		return isGood(num, num1, num2);
	}

	if (num % 10 == num1 || num % 10 == num2) {
		return isGood(num / 10, num1, num2);
	}
	else {
		return false;
	}

}

struct Circle {
	float x, y, r;
};

void inptCircle(Circle& circle) {
	cin >> circle.x;
	cin >> circle.y;
	cin >> circle.r;
}

void printCircle(const Circle& circle) {
	cout << "x : " << circle.x;
	cout << "\ny : " << circle.y;
	cout << "\nr : " << circle.r<<endl;
}

void inptCircleArr(Circle arr[], int size) {
	for (int i = 0; i < size; i++) {
		inptCircle(arr[i]);
	}
}

void printCircleArr(Circle arr[], int size) {
	for (int i = 0; i < size; i++) {
		printCircle(arr[i]);
	}
}

float areaCircle(Circle circle) {
	return 4 * 3.14 * circle.r * circle.r;
}

float distOrigin(Circle circle) {
	return sqrt(pow(circle.x, 2) + pow(circle.y, 2));
}

void sort(Circle arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		Circle temp = arr[i];
		int pos = i;

		for (int j = i+1; j < size; j++) {
			if (areaCircle(temp) == areaCircle(arr[j])) {
				if (distOrigin(temp) > distOrigin(arr[j])) {
					temp = arr[i];
					pos = j;
				}
			}
			else if (areaCircle(temp) > areaCircle(arr[j])) {
				temp = arr[j];
				pos = j;
			}
		}

		arr[pos] = arr[i];
		arr[i] = temp;
	}

}

int main() {
	//cout << isInRegion(-4, 0.5);
	//cout << isPalindrome(1231);
	//cout << isGood(001110);

	Circle arr[5];
	inptCircleArr(arr, 5);
	//printCircleArr(arr, 5);
	sort(arr, 5);

	printCircleArr(arr, 5);
}