#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 2 * a - 1; j > i+a-1; j--) {
			cout << " ";
		}
		for (int q = 0; q < i*2-1; q++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}