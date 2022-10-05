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
	int n, c, b, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> b;
	
	int start = 0;
	int end = n - 1;
	sort(a, a + n);
	while (true)
	{
		int partial_sum = a[start] + a[end];
		if (partial_sum > b)
			end--;
		else if (partial_sum < b)
			start++;
		if (partial_sum == b) {
			end--;
			start++;
			count++;
		}
		if (end <= start) {
			break;
		}
	}
	cout << count;
	return 0;
}

