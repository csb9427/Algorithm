#include <stdio.h>

int main(){
	int a, b;
	scanf("%d", &a);
	b=a-(a/100*80);
	printf("%d %d", a-(a/100*22), a-b/100*22);
	return 0;
}