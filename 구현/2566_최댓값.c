#include <stdio.h>

int main(){
	int a[9][9], i, j, c=0, b, d;
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &a[i][j]);
			if(a[i][j]>c){
				c=a[i][j];
				b=i+1;
				d=j+1;
			}
		}
	}
	printf("%d\n%d %d", c, b, d);
	return 0;
}