#include<stdio.h>
#include<conio.h>
#include"cabecera.h"

struct registro{
	int cuenta;
	char nombre[30];
	int balance;
};
typedef struct registro Cuenta;

int main (){
	appInfoData("Archivos 3","18/1172017");
	
	FILE *cfPtr;
	Cuenta c;
	int j=0;
	if((cfPtr=fopen("cuenta5.txt","w"))==NULL){
		printf("No se abrio el archivo");
	}else{
		printf("Dame la cuenta: ");
		scanf("%d",&c.cuenta);
		
		printf("Dame el nombre:");
		fflush(stdin);
		gets(c.nombre);
		
		printf("Dame el balance: ");
		scanf("%d",&c.balance);
			for(j=0;j<10;j++){
				fprintf(cfPtr,"%d%s%d\n",c.cuenta,c.nombre,c.balance);
			}
	}
	
	fclose(cfPtr);
	getch();
	return 0;
}
