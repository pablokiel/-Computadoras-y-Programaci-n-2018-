#include<stdio.h>

int main (){
	
	float y;
	float z;
	int x;
	float max;
	float min;
	
	
	printf("Introduzca un numero decimal: ");
	scanf("%f",&z);
	printf("Introduzca un numero decimal: ");
	scanf("%f",&y);
	printf("Introduzca un numero entero: ");
	scanf("%d",&x);
	
	if(x!=z && x!=y && y!=z){
		if (x>y){
			if(x>z){
			max = x;
			}else{
			max = z;
			}
		}	else{
			if(y>z){
				max = y;
			}else{
				max = z;
			}
		
		}
	printf("El mayor de los tres numeros es: %f. \n\n",max);
	
		if (x<y){
			if(x<z){
			min = x;
			}else{
			min = z;
			}
		}	else{
			if(y<z){
				min = y;
			}else{
				min = z;
			}
		
		}
		printf("El menor de los tres numeros es: %f. \n\n",min);
}else{
	printf("Algun numero se esta repitiendo\n ");
}
	system("pause");
	return 0;
	
}

