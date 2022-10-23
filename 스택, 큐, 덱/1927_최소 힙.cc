#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<cstring>
#include<stdio.h>
#include<vector>
#include<map>

using namespace std;
priority_queue<int, vector<int>,greater<int>>pq;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >>  x;
		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else pq.push(x);
	}
	return 0;
}