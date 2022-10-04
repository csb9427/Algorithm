#include <stdio.h>

int main(){
	int a=0, b=0, c=0, d=0, e=0;
	scanf("%d", &d);
	if(d%10==0){
		a = d/300;
		b = (d-a*300)/60;
		c = (d-a*300-b*60)/10; 
		printf("%d %d %d", a, b, c);
	}
	else{
		printf("%d", -1);
	}
	return 0;
}