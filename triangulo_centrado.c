#include<stdio.h>

int main(){
	
	int a,b,c,d;
	int aux;
	printf("Dame el valor maximo ->");
	scanf("%d",&c);
	aux=c-1;
	int aux2=1;

	for(a=1;a<=c;a++){
		for (b=aux;b>=1;b--){
			printf(" ");
		}

		for(d=1;d<=aux2;d++){
			printf("*");
		}
		aux2=aux2+2;
		aux--;
		printf("\n");
	}

}
