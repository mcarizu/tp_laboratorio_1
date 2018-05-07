#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "funciones.h"
#include "validaciones.h"

#define TAM 15

int main()
{
    EPersona listaPersonas[TAM];

    char seguir='s';
    int opcion=0;
    int espacioLibre;


    iniStatus(listaPersonas,TAM,0);
    hardCode(listaPersonas);
    while(seguir=='s')
    {

        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

       opcion=getInt("\nIngrese una opcion");
        switch(opcion)
        {
            case 1:
                 ingresarPersona(listaPersonas,TAM);
                break;
            case 2:
                bajaPersona(listaPersonas,TAM);
                getchar ();
                system("pause");
                break;
            case 3:
                    listadoDePersonas(listaPersonas,TAM);
                    getchar ();
                    system("pause");
                break;
            case 4:
                GraficoEdadPersonas(listaPersonas,TAM );
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
