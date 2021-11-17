#include <stdio.h>

int main(){
	int a, b[10000], c[10000], d[10000], i;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		scanf("%d %d %d", &b[i], &c[i], &d[i]);
		if(b[i]>c[i] && b[i]>d[i]){
			if(b[i]*b[i]==c[i]*c[i]+d[i]*d[i]){
				printf("Scenario #%d:\nyes\n", i);
			}
			else{
				printf("Scenario #%d:\nno\n", i);
			}
		}
		else if(c[i]>b[i] && c[i]>d[i]){
			if(c[i]*c[i]==b[i]*b[i]+d[i]*d[i]){
				printf("Scenario #%d:\nyes\n", i);
			}
			else{
				printf("Scenario #%d:\nno\n", i);
			}
		}
		else if(d[i]>c[i] && d[i]>b[i]){
			if(d[i]*d[i]==c[i]*c[i]+b[i]*b[i]){
				printf("Scenario #%d:\nyes\n", i);
			}
			else{
				printf("Scenario #%d:\nno\n", i);
			}
		}
		printf("\n");
		}
	return 0;
}