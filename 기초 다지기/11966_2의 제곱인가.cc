#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b=2, i=0;
	cin >> a;
	for (i = 0; i < a; i++) {
		b *= 2;
		if (b == a || a == 1 || a == 2) {
			cout << 1;
			break;
		}
	}
	if (i == a) {
		cout << 0;
	}
	return 0;
}