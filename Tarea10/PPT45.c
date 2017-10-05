#include<stdio.h>
#include <stdlib.h>  //gracias por la  ayuda

main()
{


	int a=0;
	int b=0;

	
	printf("Hola, juguemos piedra, papel o tijeras.\n");
	
	printf("Aqui es tan las reglas:\nPiedra es '1' \nPapel es '2'\nTijeras son '3'\n");
	
	printf("Es el turno del primer jugador ");
		scanf("%d",&a);
	
	printf("Bien, ahora es el turno del segundo jugador ");
		scanf("%d",&b); 
	
		if (a==b){
                    printf("\n\tEmpate\n");
                    }else
                    
                    if (a==1 && b==2) 
                    {
                                printf("\nGano el Player ->2\n\n");
                                }
                   
					 if (a==3 && b==1)
                    {
                                printf("\nGano el Player ->2\n\n");
                                }
					 if (a==2 && b==3)
                    {
                                printf("\nGano el Player ->2\n\n");
                                }
                    
					 if (b==3 && a==1)
                    {
                                printf("\nGano el Player ->1\n\n");
                                } 
					if (b==1 && a==2)
                    {
                                printf("\nGano el Player ->2\n\n");
                                }
                    if (b==2 && a==3)
                    {
                                printf("\nGano el Player ->1\n\n");
                                }
	
					
system("PAUSE");
return 0;
}
