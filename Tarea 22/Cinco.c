#include<stdio.h>
#include<stdlib.h>
#include"cabecera.h"
#define MAX 10

int main(int argc, char const*argv[]){
	appInfoData("Ejemplo de Punteros","09/11/2017");
	
	int cals[MAX]={8, 9, 8, 8, 6, 7, 9, 8, 10,10};
	int *ptrCals;
	int j=0;
	ptrCals=cals;
	printf("Elementos\t Direccion \t Valor\n");
	for (j = 0; j< MAX; j++){
		printf("Cal. %d=%d\n", (j+1),*ptrCals);  //estas son lineas que el profesor nos pidio cambiar
		ptrCals++;								//estas son lineas que el profesor nos pidio cambiar
	}											//estas son lineas que el profesor nos pidio cambiar
	
	printf("-------------------------\n");
	
	printf("Direccion a la que apunta: %x\n", ptrCals);
	printf("Valor al que apunta: %d\n", *ptrCals);
	ptrCals=ptrCals+4;
	printf("Direccion a la que apunta: %x\n", ptrCals);
	printf("valor al que apunta: %d\n", *ptrCals);
	
	return 0;
	
	}
	
