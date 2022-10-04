#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d\n %d\n %d", &a, &b, &c);
	if(a+b+c==180){
		if(a==b && a==c){
			printf("Equilateral");
		}
		else if(a!=b && a==c){
			printf("Isosceles");
		}
		else if(a==b && a!=c){
			printf("Isosceles");	
	}
		else if(b==c && b!=a){
			printf("Isosceles");
		}
		else if(a!=b && a!=c){
			printf("Scalene");
		}
	}
	else{
		printf("Error");
	}
	return 0;
		
}