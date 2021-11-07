#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	int a, b;
	long long count = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			scanf("%d", &b);
			count += b;
		}
	}
	printf("%lld", count);
	return 0;
}
