#include<iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	if (x >= 10) {
		while (x >= 10) {
			x /= 10;
		}
	}
	if (x % 2 == 0) {
		cout << "Even";
	}
	else {
		cout << "Odd";
	}
	return 0;
}
	