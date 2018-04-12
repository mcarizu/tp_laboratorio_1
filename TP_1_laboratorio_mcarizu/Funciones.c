#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include"Funciones.h"
#include"Validaciones.h"



int sumar(int x, int y)
{
    int resultado;
    resultado = x + y;
    return resultado;
}
int restar(int x, int y)
{
    int resultado;
    resultado = x-y;
    return resultado;
}
int multiplicar(int x, int y)
{
    int resultado;
    resultado = x*y;
    return resultado;
}
int dividir(int x, int y)
{
    int resultado;

    resultado = x/y;

    return resultado;
}

int factorial(int x)
{
    int fact=1;
    int valor=x;
    int n;
        for( n=valor; n>=1; n--)
        {
            fact=fact*n;
        }

    printf("el factorial de :%d es :%d\n\n",valor,fact);
    return fact;
}


void menu(void){

    int x=0;
    int y=0;
    int total=0;
    int  op=0;



    while(op<'1'||op>'9')
    {
        printf("\t\t\tIngrese un valor 1-6\n1)Ingresar 1er operando A=x\n2)Ingresar 2do operando B=y\n3)Calcular la Suma\n4)Calcular la Resta\n5)Calcular la Multiplicacion\n6)Calcular la Divicion\n7)Calcular el Factorial\n8)Todos las operaciones\n9) Salir\n");
        scanf("%d",&op);

        switch(op)
        {

            case 1 :x=ingresarNumeros("Ingrese un Valor para A\n",x);
                    printf("\nEl valor de A :%d\n",x);
                    break;
            case 2 :y=ingresarNumeros("Ingrese un Valor para B\n",y);
                    printf("\nEl valor de B :%d\n",y);
                    break;
            case 3 :printf("\nLa Suma...\n");
                    total = sumar(x, y);
                    printf("\nEl Resultado de la suma es: %d\n",total);
                    break;
            case 4 :printf("\nPara la Resta...\n");
                    total=restar(x, y);
                    printf("\nEl Resultado de la resta es: %d\n",total);
                    break;
            case 5 :printf("\nPara la Multiplicar...\n");
                    total=multiplicar(x, y);
                    printf("\nEl Resultado de la multiplicacion es: %d\n",total);
                    break;
            case 6 :printf("\nPara la Dividir...\n");
                    total=dividir(x, y);
                    printf("\nEl Resultado de la divicion: %d\n",total);
                    break;
            case 7 :printf("\nPara el Factorial...\n");
                    total=factorial(x);

                    break;
            case 8: printf("Calcular todas las operaciones");
                break;
            case 9 : printf("Salir");
                    op='9';
                break;
            default: printf("Ingrese un valor valido\n");
        }

    }
    return 0;
}
