#include <stdio.h>

int main(void){
	int a, b, c, d, e, f=0, i, j;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d", &b);
		for(j=0; j<b; j++){
			scanf("%d %d %d", &c, &d, &e);
			if(c>0 || d>0 || e>0){
				if(c>=d && c>=e){
					f=f+c;
					}
				else if(d>=c && d>=e){
					f=f+d;
					}
				else if(e>=c && e>=d){
					f=f+e;
					}	
				}
			}
		printf("%d\n", f);
		f=0;
	}
	return 0;
}