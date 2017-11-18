#include<stdio.h>
#include<string.h>

struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	int nCuenta;
	
};

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno(){
	ALUMNO tmp;
	
	printf ("Introduce la edad: ");
	scanf("%d", &tmp.edad);
	
	printf("introduce nombre: ");
	//fflush(stdin);  //limpia el buffer de teclado
	//gets(tmp.nombre);
	scanf("%*c%[^\n]",tmp.nombre);
	
	printf("Introduce el genero:  ");
	scanf("%c",&tmp.genero);
	
	printf("Introduce Carrera: ");
	//fflush(stdin);  //limpia el buffer de teclado
	//gets(var1.carrera);
	scanf("%*c%[^\n]",tmp.carrera);
	
	printf("Introduce numero de cuenta:  ");
	scanf("%d",&tmp.nCuenta);
	
	return tmp;
	
}

void imprimeAlumno(ALUMNO al){
	printf("************************************\n");
	printf("Nombre: %s\n",al.nombre);
	printf("Edad: %d\n",al.edad);
	printf("Genero: %c\n",al.genero);	
	printf("Carrera: %s \n",al.carrera);
	printf("Numero de cuenta: %d\n",al.nCuenta);
	
}







