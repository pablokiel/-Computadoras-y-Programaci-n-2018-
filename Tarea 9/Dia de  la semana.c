#include<stdio.h>
int main(){
	int a=0;
	printf("Dame un numero entre 1 y 7: ");
	scanf("%d",&a);
	if(a>=1&&a<=7){

	switch(a){
		case 1:
			printf("Lunes");
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miercoles");
			break;
		case 4:
			printf("Jueves");
			break;
		case 5:
			printf("Viernes");
			break;
		case 6:
			printf("Sabado");
			break;
		case 7:
			printf("Domingo");
			break;
}
}else{
	printf("Tu numero es muy alto. TODOS TUS DIAS SERAN LUNES.");
} 
}
