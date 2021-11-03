#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
	int a;
	long long sum, b, c, d, e, f;
	cin >> a;
	b = a / 10000;
	c = a / 1000 - b * 10;
	d = a / 100 - b * 100 - c * 10;
	e = a / 10 - b * 1000 - c * 100 - d * 10;
	f = a % 10;
	b = b * b * b * b * b;
	c = c * c * c * c * c;
	d = d * d * d * d * d;
	e = e * e * e * e * e;
	f = f * f * f * f * f;
	sum = b + c + d + e + f;
	cout << sum;
	return 0;
}