#include<stdio.h>
#include"cabecera.h"


int main (int argc, char *argv[]){
	appInfoData("Archivos","18/1172017");
	
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","wb");
	
	if (ptrArchivo==NULL){
		printf("Error al abrir el archivo:\n");
		
	}else{
		
		printf("Dame el dato a guardar al archivo: ");
		scanf("%d",&dato);
		
		// Se guarda el archivo
		
		fprintf(ptrArchivo,"%d\n",dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		fprintf(ptrArchivo,"%d",++dato);
		
		fclose(ptrArchivo);  //Se cierra el archivo
		
	}
	
	return 0;
}
