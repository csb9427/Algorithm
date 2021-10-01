#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d", &a, &b);
	if(b<=2){
		printf("NEWBIE!");
	}
	else if(b>2 && a>=b){
		printf("OLDBIE!");
	}
	else if(b>2 && a<b){
		printf("TLE!");
	}
	return 0;
}