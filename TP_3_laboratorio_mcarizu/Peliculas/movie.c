#include "movie.h"
#include"validaciones.h"
#include<stdio.h>
#include<stdlib.h>

void initStruct(eMovie Peliculas[],int tamanio,int valor){

        int i;
        for(i=0;i < tamanio; i++)
        {
            if(Peliculas[i].estado == valor)
            {
                return i;
            }
        }
        return -1;

}
void menu (eMovie Peliculas[],int tamanio){
 int op;
    switch(op){
        case 1:printf("\nAgregar película\n");
               ingresarPeliculas(Peliculas, tamanio);
                break;
        case 2:printf("\nBorrar película\n");
               borrarPelicula(Peliculas,tamanio,"\nIngrese el ID:\n");
               break;
        case 3:printf("\nModificar película\n");
                modificarPelicula(Peliculas,tamanio,id,"\nIngrese el ID:\n");
                break;
        case 4:printf("Listar en HTML\n");

               break;

        default:printf("\nIngrese una opcion valida\n")
                ;break;
    }

}

int ingresarPeliculas(eMovie Peliculas [], int tamanio)
{
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
         printf("\nIngrese el link:\n");
         fflush(stdin);
         gets(Peliculas[index].link);

         duracionAux=getInt("\ningrese el Puntaje de la pelicula\n");
         Peliculas[index].puntaje=puntajeAux;


         duracionAux=getInt("\ningrese la duracion de la pelicula\n");
         Peliculas[index].duracion=duracionAux;
         Peliculas[index].id=1;


    Peliculas[index].id =++;

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
            Peliculas[index].id = --;
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
int modificarPelicula(eMovie Peliculas, int tamanio, int id, char mensaje){



}
void hardCode(eMovie Peliculas, int tamanio){

 char hardTitulo[10]={"La Casa Embrujada","El Campeon","Resplandor","El patron del mal","El pobre","Hola Saly","La Casa ","AET Summer","El mañana","Asesinos"};
 char hardGenero[10]={"Terror","Novela","Ficcion","Accion","Ficcion","Comedia","Comedia","Musical","Romance","Belicas"};
 char hardLink[10]={"https://www.pinterest.es/pin/556476097697925194/","https://www.pinterest.es/pin/46865652348090419/","https://www.pinterest.com.mx/pin/364791638545445334/",};
 int hardDuracion[10]={120,140,220,90,120,96,72,140,120,120};
 char hardDescripcion[10]={"Una pelicula basada de un bets seller","basada en echos reales","Dirigida por Rod Stewar","Una pelicula","un bets seller","-_-","Una pelicula basada ","Las mejores canciones del 2016"," un bets seller","Una pelicula basada en echos Reales"};
 int hardID[10]={1,2,3,4,5,6,7,8,9,10};
 int hardStatus[10]={1,1,1,1,1,1,1,1,1,1};
 int hardPuntaje[10]={5,5,2,4,3,2,3,4,2,5};





}

