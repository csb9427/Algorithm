#include <stdio.h>

int main(){
	int a, b, c, d, i, Q1=0, Q2=0, Q3=0, Q4=0, Q5=0;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		if(b>0 && c>0){
			Q1+=1;
		}
		else if(b<0 && c>0){
			Q2+=1;
		}
		else if(b<0 && c<0){
			Q3+=1;
		}
		else if(b>0 && c<0){
			Q4+=1;
		}
		else{
			Q5+=1;
		}
	}
	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d", Q5);
	return 0;
}