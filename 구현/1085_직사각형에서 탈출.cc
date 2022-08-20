#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	e = c - a;
	f = d - b;
	if (a <= b && a <= e && a <= f)
		printf("%d", a);
	else if (b <= a && b <= e && b <= f)
		printf("%d", b);
	else if (e <= b && e <= a && e <= f)
		printf("%d", e);
	else if (f <= a && f <= b && f <= e)
		printf("%d", f);
	return 0;
}