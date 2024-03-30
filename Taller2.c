#include <stdio.h>

int funcionTienda(void)
{  
      int producto, precio;
      printf("productos: \n 1)Bebida $1000 \n 2)Pan $1500 \n 3)te $300 \n 4)pizza $8000 \n 5)sushi $10000 \n 6)Hamburguesa $7000");
      printf("\n ingrese su producto:");
      scanf("%d",&producto);
      if(producto == 1)
      {
            precio=1000;
      }
      if(producto == 2)
      {
            precio=1500;
      }
      if(producto == 3)
      {
            precio=300;
      }
      if(producto == 4)
      {
            precio=8000;
      }
      if(producto == 5)
      {
            precio=10000;
      }
      if(producto == 6)
      {
            precio=7000;
      }
      if(producto != 1 && producto != 2 && producto != 3 && producto !=4 && producto !=5 && producto != 6)
      {
            precio=0;
      }
      return precio;
}

float funcionEnvio(int total)
{
      float enviof;
      if(total == 0)
      {
            enviof = 0;
      }
      else 
      {
            if(total > 5000)
            {
                enviof = (float)total / 10;
            }
            else
            {
                enviof = 2000;
            }
      }
      return enviof;
      
}

int main()
{
      int otroproducto, totalf, total, envio1;
      otroproducto = 1;
      total = 0;
     
      while(otroproducto != 0)
    {
            total=total+funcionTienda();
            if (total==0)
            {
            printf("Error en el numero ingresado\n");
            }
            else
            {
            envio1=funcionEnvio(total);
            printf("\nsu valor actual es: %d", total);
            printf("\nsu costo de envio es: %d", envio1);
            }
           printf("\nle gustaria ingresar otro producto?\n(1 = si)\n(0 = no)\n");
            scanf("%d", & otroproducto); 

      }
      
      totalf = total + envio1;
      printf("\ntotal + envio : %d" ,totalf );
      return 0;
}



