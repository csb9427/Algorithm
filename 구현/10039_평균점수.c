#include <stdio.h>

int main(){
	int a, b, c, d, e, i;
	scanf("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e);
	while(a<40 || b<40 || c<40 || d<40 || e<40){		
		if(a<40){
			a=40;
	}
		else if(b<40){
			b=40;
	}
		else if(c<40){
			c=40;
	}
		else if(d<40){
			d=40;
	}
		else if(e<40){
			e=40;
		}
	}
	
	printf("%d", (a+b+c+d+e)/5);
	return 0;
}