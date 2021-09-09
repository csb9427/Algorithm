#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d\n", &b);
	scanf("%d\n", &c);
	scanf("%d", &d);
	printf("%d\n", (a+b+c+d)/60);
	printf("%d\n", (a+b+c+d)%60);
	return 0;
}