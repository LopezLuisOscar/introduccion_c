#include<stdio.h>
int main(){
int a;
printf("Dame la edad ->");
scanf("%d",&a);

	if(a>=18){
		printf("Puedes votar :D");
	}
	else {
		printf("No puedes votar :(");
	}
}
