#include<stdio.h>

int main(){	
int inf=3;
int sup=6;
int j=0;
 for(inf=3;inf<=sup;inf=inf+1){
	for(j=1;j<=10;j=j+1){
		printf("%dx%d=%d\n",inf,j,inf*j);
	}
 }
 printf("Fin del programa");
}
