//PROGRAMA CON LA FUNCION EN LA PARTE DE ABAJO DE MAIN

#include<stdio.h>

void fnCuadro(int, int);


int main(){
	
	int num1,num2;    
	
	printf("Dame  un numero:  ");
	scanf("%i",&num1);
	printf("Dame  un numero:  ");
	scanf("%i",&num2);
	
	fnCuadro(num1, num2);
	
	return 0;
}


void fnCuadro(num1, num2){
	
	int k,j;
	
	for(k=1;k<=num1;k++){
			for(j=1;j<=num2-1;j++){
				printf("+");
			}
			printf("+\n");
		}
		return;
}

