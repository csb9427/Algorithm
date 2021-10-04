#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d", &a);
	b=a%10;
	if(a%10!=0){
		if(b<10){
		b=a/10+a%10;
		printf("%d", b);		
	}
		else if(b==10){
			b=(a-10)/10+10;
			printf("%d", b);
	}
	}
	else if(a%10==0){	
		b=(a-10)/100+10;
		printf("%d", b);
	}
	return 0;
}	