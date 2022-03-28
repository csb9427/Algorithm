#include <stdio.h>

int main(){
	int a[4], i, j, c, b, d;
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%d", &a[j]);
			if(a[j]==0){
				c++;
			}
			else if(a[j]==1){
				d++;
			}
		}
		if(c==1){
			printf("A\n");
		}
		else if(c==2){
			printf("B\n");
		}
		else if(c==3){
			printf("C\n");
		}
		else if(c==4){
			printf("D\n");
		}
		else if(d==4){
			printf("E\n");
		}
		c=0, d=0;
	}
	return 0;
}