#include<stdio.h>
int main(){
	int a=0;
	int num1=0;
	int num2=0;
	
	do{
	printf("\n\n=================MENU==============\n\n");
	printf("Si quieres hacer una suma presiona 1. \n");	
	printf("Si quieres hacer una resta presiona 2. \n");		
	printf("Para salir presiona 3.\n");
	
		scanf("%i",&a);
	
	switch(a){
			
			case 1:
			printf("\nDame un numero:  \n");
			scanf("%i",&num1);	
			printf("\nDame un numero:  \n");
			scanf("%i",&num2);
			printf("\nLOS NUMEROS  SUMAN: %d \n",(num1 + num2));	
			break;
		
			case 2:
			
			printf("\nDame un numero:  \n");
			scanf("%i",&num1);	
			printf("\nDame un numero:  \n");
			scanf("%i",&num2);	
			printf("\nLA RESTA ES: %d \n\n", (num1-num2));
			break;	
		
			
			case 3:
			break;
			
	}
	}while(a!=3);
	printf("\nFIN DEL PROGRAMA\n");

	system("pause");
	return 0;


}
