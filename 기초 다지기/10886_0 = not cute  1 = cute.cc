#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b == 0)
			c++;
		else if (b == 1)
			d++;
	}
	if (c > d)
		cout << "Junhee is not cute!";
	else if (c < d)
		cout << "Junhee is cute!";
	return 0;
}