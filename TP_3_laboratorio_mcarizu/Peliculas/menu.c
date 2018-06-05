#include<string.h>
#include<stdio.h>
#include"validaciones.h"
#include"movie.h"
#include"menu.h"



void menuABM(eMovie *peliculas, int tamanio,char mensaje[])
{
    int op=0;
    listadoPeliculas(peliculas,tamanio);
    int s;


     do{
        printf("%s\n",mensaje);
        printf("Agregar Pelicula-1\n Borrar-2\n Modificar-3\n Listar-4\nHTML-5\nSALIR-6\n");

        scanf("%d",&op);
        op=validarNumero(op,1,6);
        switch(op)
            {
                 //printf("Agregar Pelicula-1\n Borrar-2\n Modificar-3\n Listar-4\nHTML-5\n\SALIR-6");

                case 1:printf("Ingrese Una Pelicula Nueva");
                        getchar ();
                       ingresarPeliculas(peliculas,tamanio);
                    break;
                case 2:

                       s=borrarPelicula(peliculas,tamanio,"Pelicula a Borrar\nIngrese el ID a Borrar\n");
                       if(s!=0)
                       {
                           op=6;
                           break;
                       }
                       break;
                case 3:
                       printf("Modificar Pelicula");

                       break;
                case 4:listadoPeliculas(peliculas,tamanio);
                    break;
                case 5: crearArchivoHtml(peliculas,tamanio);
                    break;
                case 6 : printf("Salir");
                        op=6;
                    break;


            }
            system("pause");
            system("cls");

    }while(op!=6);
}
int validarGenero(eMovie *Peliculas, int tamanio, int id)
{
    int i;
    int num;
    int index;
    char genero[5][20]={"Terror","Comedia","Drama","Ficcion","Accion","suspenso"};
    printf("\nSeleccione un genero\n");
    printf("Terror-1\n Comedia-2\n Drama-3\n Ficcion-4\nAccion-5\n");
    scanf("%d",&num);
    num=buscaIdPelicula(Peliculas,tamanio,num);
    num=validarNumero(num,1,5);
    for(i=0;i<tamanio;i++)
    {
         if(index==num)
        {
          strcpy(Peliculas[i].genero,genero[i]);
          return 1;
        }
    }

    return 0;
}
//int ingresarLink(eMovie *,int)
//{

//}
