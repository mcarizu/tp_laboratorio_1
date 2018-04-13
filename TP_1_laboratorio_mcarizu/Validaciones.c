#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include"Funciones.h"
#include"Validaciones.h"



int pedirDatos(char texto[],int min, int max){                              /*Funcion generica, se puede usar para cualquier tipo de ingreso de datos, siempre cambiando el formato de de salida */

    int retorno;

    printf("%s",texto);
     scanf("%d",&retorno);



    while(retorno < min || retorno > max)
    {
         if (min!='\0'&& max!='\0')
         {
            printf("Error !!! Reigrese Dato,\n%s",texto);
            scanf("%d",&retorno);
         }
    }

        return retorno;

}

int ingresarNumeros(char mensaje[],int x,int min, int max)
{
            printf("%s",mensaje);
            scanf("%d",&x);
        while(x < min || x > max){
            printf("Error !!! Reigrese Dato,\n");
            scanf("%d",&x);
         }
    return x;

}
