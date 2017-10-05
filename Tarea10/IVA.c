
#include <stdio.h>
void main(void){
     float fSubTotal, fIva, fTotal;
     printf("\n Calculo de compra \n  Subtotal : ");
     scanf("%f",&fSubTotal);
     fIva = fSubTotal * 0.16;
     fTotal = fSubTotal + fIva;
     printf("\n Iva : %7.2f \n Total a pagar : %7.2f\n", fIva, fTotal);
}
