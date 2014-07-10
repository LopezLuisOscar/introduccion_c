#include<stdio.h>

int main(){

int i,j,k;
int n=5;
for(i=1;i<=5;i++){
	for(j=1;j<=(i-1);j++){
		printf(" ");
	}
	for(k=1;k<=n;k++){
		printf("*");
	}
printf("\n");
n--;
}

}
