#include <stdio.h>

int main(){
	int a, b, c, d[10000], e=0, f, i, j;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		for(j=0; j<b; j++){
			scanf("%d", &d[j]);
			e=d[j]/c+e;
		}
		printf("%d\n", e);
		e=0;
	}
	return 0;
}