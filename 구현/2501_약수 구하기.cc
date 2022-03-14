#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a, c, d;
	vector<int>b;
	cin >> a >> d;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			b.push_back(i);
		}			
	}
	sort(b.begin(), b.end());
	if (b.size() < d) {
		cout << 0;
	}
	else {
		cout << b[d - 1];
	}
	return 0;
}