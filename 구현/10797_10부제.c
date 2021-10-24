#include <stdio.h>

int main(){
	int a, b[4], i, c=0;
	scanf("%d\n %d %d %d %d %d", &a, &b[0], &b[1], &b[2], &b[3], &b[4]);
	for(i=0; i<5; i++){
		if(a==b[i]){
			c++;
		}
		else if(a!=b[i]){
			c = c;
		}
	}
	printf("%d", c);
	return 0;
}