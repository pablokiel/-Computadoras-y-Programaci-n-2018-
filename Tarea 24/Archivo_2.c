#include<stdio.h>
#include"cabecera.h"


int main (int argc, char *argv[]){
	appInfoData("Archivos 2","18/1172017");

	int datoLeido;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","rb");
	
	if (ptrArchivo==NULL){
		printf("Error al abrir el archivo. \n");
			
	}else{
		while(!feof(ptrArchivo)){
			fscanf(ptrArchivo,"%d",&datoLeido);
			printf("Dato: %d\n",datoLeido);
		}
		fclose(ptrArchivo);
	}
	
}
