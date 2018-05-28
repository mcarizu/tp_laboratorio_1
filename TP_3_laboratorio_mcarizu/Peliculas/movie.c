#include "movie.h"
#include"validaciones.h"
#include<stdio.h>
#include<stdlib.h>

void initStruct(eMovie Peliculas[],int tamanio){

        int i;
        for(i=0;i < tamanio; i++)
        {
            if(Peliculas[i].estado == 0)
            {
                return i;
            }
        }
        return -1;

};


int ingresarPeliculas(eMovie Peliculas [], int tamanio)
{
    char titulo  [20];
    char genero [20];
    char descripcion [20];
    char link[20];

    int index=0;
    int duracionAux;
    int puntajeAux;

    index=buscarVacio(Peliculas,tamanio);
    if(index==-1)
    {
        printf("\n¡¡¡ NO HAY ESPACIO LIBRE !!!\n");
        system("pause");
    }
    else
        {
         printf("\nALTAS\n");

         printf("\nIngrese el Titulo:\n");
         fflush(stdin);
         gets(Peliculas[index].titulo);
         printf("\nIngrese el Genero:\n");
         fflush(stdin);
         gets(Peliculas[index].genero);
         printf("\nIngrese la Descripcion:\n");
         fflush(stdin);
         gets(Peliculas[index].descripcion);
         duracionAux=getInt("\ningrese la duracion de la pelicula\n");
         Peliculas[index].duracion=duracionAux;


    Peliculas[index].id =+;

}

int borrarPelicula(eMovie Peliculas[],int tamanio,  char mensaje){
    int i;
    int index;
    int ID;

    printf("\n%s\n",mansaje);
    scanf("%d",&ID);
    index=buscarIdPelicula(Peliculas,tamanio,ID);
    do{
        if(index!=-1)
        {
            Peliculas[index].estado=0;
            Peliculas[index].id =-;
        }
        else
           printf("\nNo se encuentra el ID, Reigreselo\n");
            system("pause");
            system("cls");

    }while(index==ID);
    return 0;


}
int buscaIdPelicula(eMovie Peliculas[],int tamanio, int id){

    int i;
    for(i=0;i < tamanio; i++)
    {
        if(Peliculas[i].id == id && Peliculas[i].estado == 1)
        {
            return i;
        }
    }
    return -1;

}

int buscarVacio(eMovie Peliculas[], int tamanio){

        int i;
        for(i=0;i < tamanio; i++)
        {
            if(Peliculas[i].estado == 0)
            {
                return i;
            }
        }
        return -1;
}

