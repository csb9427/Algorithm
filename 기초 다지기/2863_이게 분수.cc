#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>

using namespace std;

int main() {
	float a, b, c, d, a1, b1, c1, d1;
	cin >> a >> b >> c >> d;
	a1 = a / c + b / d;
	b1 = c / d + a / b;
	c1 = d / b + c / a;
	d1 = b / a + d / c;
	if (a1 > b1 && a1 > c1 && a1 > d1) {
		cout << 0;
	}
	else if (b1 > a1 && b1 > c1 && b1 > d1) {
		cout << 1;
	}
	else if (c1 > b1 && c1 > a1 && c1 > d1) {
		cout << 2;
	}
	else if (d1 > b1 && d1 > c1 && d1 > a1) {
		cout << 3;
	}
	else if (a1 == b1 || a1 == c1 || a1 == d1) {
		if (a1 <= b1 && a1 <= c1 && a1 <= d1) {
			cout << a1;
		}
		else if (b1 <= a1 && b1 <= c1 && b1 <= d1) {
			cout << b1;
		}
		else if (c1 <= b1 && c1 <= a1 && c1 <= d1) {
			cout << c1;
		}
		else if (d1 <= a1 && d1 <= b1 && d1 <= c1) {
			cout << d1;
		}
	}
	return 0;
}