#include <stdio.h>

int main(){
	int a, b, c, d, i;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		scanf("%d %d", &b, &c);
		printf("Case %d: %d\n", i, b+c);
	}
	return 0;
}