#include <iostream>
#include <string>
using namespace std;

bool findAlpha(string str, char ch, int pos = 0) {
	if (pos == str.length()) {
		return false;
	}

	if (tolower(ch) == tolower(str[pos])) {
		return true;
	}

	return findAlpha(str, ch, pos + 1);
}

int main() {
	cout << findAlpha("The quick brown fox..", 'g');
}