#include <stdio.h>

int main(){
	int a, b, i, j, count=0;
	double e, f, g, c, d;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %lf", &b, &c);
		for(j=0; j<b; j++){
			scanf("%lf %lf %lf", &d, &e, &f);
			g=e/f;
			if(g*d>=c){
				count++;
			}
		}
		printf("%d\n", count);
		count=0;
	}
	return 0;
}