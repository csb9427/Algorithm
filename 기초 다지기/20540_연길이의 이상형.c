#include <stdio.h>

int main(void){
	char a, b, c, d;
	scanf("%c%c%c%c", &a,&b,&c,&d);
	if(a=='E'){
		a='I';
	}
	else if(a=='I'){
		a='E';
	}
	if(b=='S'){
		b='N';
	}
	else if(b=='N'){
		b='S';
	}
	if(c=='F'){
		c='T';
	}
	else if(c=='T'){
		c='F';
	}
	if(d=='J'){
		d='P';
	}
	else if(d=='P'){
		d='J';
	}
	printf("%c%c%c%c", a,b,c,d);
	return 0;
}