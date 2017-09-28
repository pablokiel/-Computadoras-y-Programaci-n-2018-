#include<stdio.h>
int main(){
	int x=0;
	printf("Dame un numero del 0 al 9: ");
	scanf("%d",&x);
	if (x>=0 && x<=9){
		switch(x){
			case 0:
					printf("****");
					printf("\n*  *\n*  *");
					printf("\n*  *\n*  *\n");
					printf("****");
					break;
			case 1:
					printf("\n*\n*\n");
					printf("*\n*\n*\n");
					break;
			case 2:
					printf("****");
					printf("\n   *\n   *\n");
					printf("****");
					printf("\n*\n*\n");
					printf("****");
					break;
			case 3:
					printf("****");
					printf("\n   *\n   *\n");
					printf("****");
					printf("\n   *\n   *\n");
					printf("****");
					break;
			case 4:
					printf("\n*  *\n*  *\n");
					printf("****");
					printf("\n   *\n   *\n");
					break;
			case 5:
					printf("****");
					printf("\n*\n*\n");
					printf("****");
					printf("\n   *\n   *\n");
					printf("****");
					break;
			case 6:
					printf("****");
					printf("\n*\n*\n");
					printf("****");
					printf("\n*  *\n*  *\n");
					printf("****");
					break;
			case 7:
					printf("****");
					printf("\n   *\n   *");					
					printf("\n   *\n   *\n");				
					break;
			case 8:
					printf("****");
					printf("\n*  *\n*  *\n");
					printf("****");
					printf("\n*  *\n*  *\n");
					printf("****");
					break;
			case 9:
				    printf("****");
					printf("\n*  *\n*  *\n");
					printf("****");
					printf("\n   *\n   *\n");
					printf("****");
					break;
		}
	
	}else{
	printf("Lee las instrucciones, intenta con otro numero.");
}
}
