#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <set>
#include <stack>

using namespace std;

int main() {
	string a;
	cin >> a;
	stack<int>s;

	for (int i = 0; i < a.size(); i++) {
		char c = a[i];
		if (c >= '0' && c <= '9') {
			s.push(c - '0');
		}
        else {
            int a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();

            if (c == '+') {
                s.push(b + a);
            }
            else if (c == '-') {
                s.push(b - a);
            }
            else if (c == '*') {
                s.push(b * a);
            }
            else if (c == '/') {
                s.push(b / a);
            }
        }
    }
    cout << s.top();
    return 0;
}
