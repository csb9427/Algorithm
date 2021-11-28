#include <stdio.h>

int main(){
	float a, b, c, g=1000000; 
	int i; 
	float d[1000], e[1000], f[1000];
	scanf("%f %f\n", &a, &b);
	scanf("%f", &c);
	for(i=0; i<c; i++){
		scanf("%f %f", &d[i], &e[i]);
		f[i]=d[i]*(1000/e[i]);
		if(f[i]<g){
			g=f[i];
		}
	}
	if(g>=a*(1000/b)){
		printf("%.2f", a*(1000/b));
	}
	else{
		printf("%.2f", g);
	}
	return 0;
}