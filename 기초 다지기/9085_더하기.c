#include <stdio.h>

int main(){
	int a, b, c[11], d=0, i, j;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d", &b);
		for(j=0; j<b; j++){
			scanf("%d", &c[i]);
			d=c[i]+d;
		}
		printf("%d\n", d);
		d=0;
	}
	return 0;
}