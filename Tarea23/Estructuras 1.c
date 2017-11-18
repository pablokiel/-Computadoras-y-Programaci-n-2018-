#include<stdio.h>
#include<string.h>
#include"cabecera.h"

struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

//typedef struct alumnos ALUMNO; //Se agrega un alias a la structura

int main (int argc, char *argv[]){
	appInfoData("Estructuras","18/11/2017");
	
	struct alumnos var1;
	//ALUMNO var1;
	
	printf("Introduce la edad: ");
	scanf ("%d",&var1.edad);
	
	printf("Introduce el nombre: ");
	fflush(stdin);  //limpia el buffer de teclado
	gets(var1.nombre);


	
	return 0;
	
}
