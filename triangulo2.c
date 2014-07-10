#include<stdio.h>

int main(){
int a,b,c;
int x=1;

for(a=5;a>=1;a--)
{
	for(b=1;b<=(a-1);b++){
		printf(" ");
	}

	for(c=1;c<=x;c++){
		printf("*");
	}
printf("\n");
x++;
}

}
