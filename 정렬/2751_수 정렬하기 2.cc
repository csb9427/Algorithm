#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <set>

using namespace std;

vector<int>a;

int main() {
	int n, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		a.push_back(c);
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << '\n';
	}
	return 0;
}

