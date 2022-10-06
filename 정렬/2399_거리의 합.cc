#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <set>

using namespace std;

int a[1000000];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	long long sum = 0, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			num = a[i] - a[j];
			if (num < 0) {
				num = num * -1;
			}
			sum = sum + num;
		}
	}
	cout << sum * 2;
	return 0;
}

