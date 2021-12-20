#include <stdio.h>

int main(){
	int a, b, c, d[10000], e[10000], i, j, f[10000], q, w;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d", &b);
		scanf("%d", &c);
		for(j=0; j<c; j++){
			scanf("%d %d", &d[j], &e[j]);
			f[j]=d[j]*e[j];
		}
		for(int q=0; q<c; q++){
			w=f[q]+w;
		}
		printf("%d\n", b+w);
		w=0;
	}
	return 0;
}