#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "funciones.h"
#include "validaciones.h"


void iniStatus(EPersona listaPersonas[],int tamanio, int value){

 int i;
 for(i=0;i < tamanio; i++)
    {
        listaPersonas[i].estado = value;
    }
}

int obtenerEspacioLibre(EPersona listaPersonas[], int tamanio){
    int i;
        for(i=0;i < tamanio; i++)
        {
            if(listaPersonas[i].estado == 0)
            {
                return i;
            }
        }
        return -1;
}

int ingresarPersona(EPersona listaPersonas[], int tamanio){

    int index=0;

    index=obtenerEspacioLibre(listaPersonas,tamanio);
    if(index==-1)
    {
        printf("\n¡¡¡ NO HAY ESPACIO LIBRE !!!\n");
        //break;
    }
    printf("\nALTAS\n");
    printf("\nIngrese el Nro de DNI:");
    scanf("%d",&listaPersonas[index].dni );
    fflush(stdin);
    printf("\nIngrese el Nombre:\n");
    gets(listaPersonas[index].nombre);
    fflush(stdin);
    listaPersonas[index].estado=1;
    printf("\nIngrese la Edad:\n");
    scanf("%d",&listaPersonas[index].edad);
    fflush(stdin);

}

int buscarPorDni(EPersona listaPersonas[],int tamanio, int dni){

    int i;
    for(i=0;i < tamanio; i++)
    {
        if(listaPersonas[i].dni == dni && listaPersonas[i].estado == 1)
        {
            return i;
        }
    }
    return -1;
}
void ordenarListadoPersonas(EPersona listaPersona[], int tamanio )
{
    EPersona aux[tamanio];

    for(int i=0; i<tamanio-1; i++)
    {
        for(int j=i+1; j<tamanio; j++)
        {
            if(listaPersona[i].estado == 1)
            {
                if((strcmp(listaPersona[i].nombre,listaPersona[j].nombre))> 0)
                {
                    aux[i]= listaPersona[i];
                    listaPersona[i]=listaPersona[j];
                    listaPersona[j]=aux[i];

                }
            }
        }
    }
}
void GraficoEdadPersonas (EPersona listaPersona[], int tamanio )
{


    char grafico1[tamanio][2];
    char grafico2[tamanio][2];
    char grafico3[tamanio][2];
    int w=0;
    int j=0;
    int k=0;


    for(int i=0; i<=tamanio ; i++)
    {
        strcpy(grafico1[i]," ");
        strcpy(grafico2[i]," ");
        strcpy(grafico3[i]," ");
    }

    for(int i=0; i<tamanio ; i++)
    {
        if(listaPersona[i].edad < 18 && listaPersona[i].edad >0)
        {
            fflush(stdin);
            strcpy(grafico1[w],"*");
            w++;
        }
        if(listaPersona[i].edad > 18 && listaPersona[i].edad <=35)
        {
            fflush(stdin);
            strcpy(grafico2[k],"*");
            k++;
        }
        if(listaPersona[i].edad > 35)
        {
            fflush(stdin);
            strcpy(grafico3[j],"*");
            j++;
        }
    }
    printf("\n");
    for(int i=tamanio; i>=0 ; i--)
    {
        if( (strcmp(grafico1[i],"*")==0) || (strcmp(grafico2[i],"*")==0) || (strcmp(grafico3[i],"*")==0)  )
        {
            printf("  %d-| %s      ", i+1, grafico1[i]);
            printf("%s       ", grafico2[i]);
            printf("%s\n", grafico3[i]);
        }
    }
    printf("  __|_________________________\n");
    printf("     <18   19-35    >35\n\n");
    printf("Gráfico para una estadística de %d personas con edad menor a 18, %d personas con edades entre 19 y 35, y %d personas con edades mayores a 35.\n", w,k,j);
    system("pause");
    system("cls");
}

 int listadoDePersonas(EPersona listaPersona[],int tamanio)
{
    int i;
    ordenarListadoPersonas(listaPersona,tamanio);
    printf("\n|     NOMBRE    |   EDAD    |   DNI       |\n");
    for(i=0;i<tamanio;i++)
    {
        if(listaPersona[i].estado==1)
        {
            mostrarPersona(listaPersona[i]);
        }
    }

}

int mostrarPersona(EPersona listaPersona)
{
   printf("\n|%16s|%12d|%14d|\n",listaPersona.nombre,listaPersona.edad,listaPersona.dni);
}

int bajaPersona(EPersona listaPersona[], int tamanio)
{
    int dni;
    int i;
    int index;

    printf("\nIngrese el DNI\n");
    scanf("%d",&dni);
    index=buscarPorDni(listaPersona,tamanio,dni);
    do{
        if(index!=-1)
        {
            listaPersona[index].estado=0;
        }
        else

            printf("\nNo se encuentra el DNI, Reigreselo\n");
            system("pause");
            system("cls");

    }while(index==dni);
    return 0;
}
void hardCode(EPersona listaPersona[])
{
    int dni[15]= {11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999,10101010,20202020,30303030,40404040,50505050};
    char nombre[15][20]= {"Martino","Luz ","Yael ","Bruno","Gonzalo","Dario","Maxi","Sandra","Belen","Mercedes","Lucas","Alejandro","Julio","Daniel","Lucia"};
    int edad[15]= {7,9,31,1,9,12,23,34,45,56,54,43,32,27,40};
    int estado[15]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

        for(int i=0; i<15; i++)
    {
        strcpy(listaPersona[i].nombre, nombre[i]);
        listaPersona[i].dni=dni[i];
        listaPersona[i].edad=edad[i];
        listaPersona[i].estado=estado[i];

    }
}

