//FUNCION IVA

#include<stdio.h>
#include"funcioniva.h"

void main(){	

	float fSubtotal,fIva,fTotal;
		
	printf("\nCALCULANDO EL IVA\n\n");

	printf("Subtotal:   ");
	scanf("%f",&fSubtotal);	
	
	
	fnIva(fSubtotal);
	fIva=fnIva(fSubtotal);
	fTotal=	fSubtotal+fIva;
	
	printf("     IVA: %7.2f",fIva);
	
	printf("\n   TOTAL: %7.2f\n",fTotal);
	
	return;
}
