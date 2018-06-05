#include "movie.h"
#include"validaciones.h"
#include"archi.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void initStruct(eMovie Peliculas[],int tamanio, int valor){

        int i;
        for(i=0;i < tamanio; i++)
        {
            Peliculas[i].estado == valor;
        }


}

int ordenarPeliculas(eMovie Peliculas[],int tamanio)
{

    eMovie aux[tamanio];

    for(int i=0; i<tamanio-1; i++)
    {
        for(int j=i+1; j<tamanio; j++)
        {
            if(Peliculas[i].estado == 1)
            {
                if((strcmp(Peliculas[i].titulo,Peliculas[j].titulo))> 0)
                {
                    aux[i]= Peliculas[i];
                    Peliculas[i]=Peliculas[j];
                    Peliculas[j]=aux[i];

                }
            }
        }
    }


}
void listaPelicula(eMovie Peliculas)
{
     // printf("\n-------------------------------------------------------------------\n");
//    printf("\n|   %10d| %4d|    %10s    |     %10s     |    %10d     |      %10s      |    %2d    |    %10s      |\n",Peliculas.estado, Peliculas.id,Peliculas.titulo,Peliculas.genero,Peliculas.duracion,Peliculas.descripcion,Peliculas.puntaje,Peliculas.link);
     printf("\n ID: %d  Titulo: %s ", Peliculas.id,Peliculas.titulo);
     printf("\n\t Genero: %s Duracion: %d Puntaje: %d",Peliculas.genero,Peliculas.duracion,Peliculas.puntaje);
     printf("\n\t Descripcion: %s  ", Peliculas.descripcion);
     printf("\n\t Link Imagen: %s  \n", Peliculas.link);
     printf("\n\t Estado: %d  \n", Peliculas.estado);
    printf("\n-------------------------------------------------------------------\n");



}

int listadoPeliculas(eMovie Peliculas[] , int tamanio)
{
    int i;
    ordenarPeliculas(Peliculas,tamanio);
    printf("\n|  Estado  | ID |       TITULO       |    GENERO     |  DURACION  |  DESCRIPCION  |  PUNTAJE |   LINK    |\n");
    for(i=0;i<tamanio;i++)
    {
        if(Peliculas[i].estado==1)
        {
            listaPelicula(Peliculas[i]);
        }
    }

}
int ingresarPeliculas(eMovie Peliculas[], int tamanio)
{



    int index=0;
    int duracionAux;
    int puntajeAux;

    index=buscarVacio(Peliculas,tamanio);
    if(index==-1)
    {
        printf("\n NO HAY ESPACIO LIBRE !!!\n");
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

         printf("\nIngrese la URL de la Imagen:\n");
         fflush(stdin);
         gets(Peliculas[index].link);

         duracionAux=getInt("\nIngrese la duracion de la pelicula\n");
         Peliculas[index].duracion=duracionAux;

         puntajeAux=getInt("\nIngrese el Puntaje\n");
         Peliculas[index].puntaje=puntajeAux;

         Peliculas[index].id = +1;
         Peliculas[index].estado=1;

        }
        GuardarArchivo(Peliculas,tamanio);
}
//param eMovie tamanio mensaje
//return 0
int borrarPelicula(eMovie Peliculas[],int tamanio, char mensaje[]){

    int index;
    int ID;


    printf("\n%s\n",mensaje);
    scanf("%d",&ID);

    index=buscaIdPelicula(Peliculas,tamanio,ID);
    do{
        if(index!=-1)
        {
            Peliculas[index].estado=0;
            Peliculas[index].id =-1;

        }
        else
        {
            printf("\nNo se encuentra el ID, Reigreselo\n");
            system("pause");
            system("cls");
        }


    }while(index==ID);

    GuardarArchivo(Peliculas,tamanio);
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



void hardCode(eMovie Peliculas[], int tamanio)
{


char hardTitulo[10][50]={"Deadpool 2","Luis y los aliens","Las travesuras de Peter Rabbit","Gnomos al ataque","Intriga internacional","Rescate en Entebbe","Rampage: devastación","El insulto","La aparición","Basada en hechos reales"};
char hardGenero[10][20]={"ciencia ficción ","Animación ","Animación","Animación","Drama","suspenso","Acción","Suspenso","Drama","Suspenso"};
char hardLink[10][5000]={"http://es.web.img2.acsta.net/c_215_290/pictures/18/02/08/09/37/3289486.jpg",
                         "https://pics.filmaffinity.com/luis_the_aliens-784207013-msmall.jpg",
                         "https://www.guiadelocio.com/var/guiadelocio.com/storage/images/cine/archivo-peliculas/peter-rabbit/34668202-13-esl-ES/peter-rabbit.jpg",
                         "https://pics.filmaffinity.com/Gnomos_al_ataque-382481193-msmall.jpg",
                         "https://www.elseptimoarte.net/carteles/341/con_la_muerte_en_los_talones_11899.jpg",
                         "http://www.todaslascriticas.com.ar/img/peliculas/afiches/rescate-en-entebbe.jpg",
                         "http://www.cartelera.com.uy/imagenes_espectaculos/moviedetail13/23782.jpg",
                         "https://medias.unifrance.org/medias/104/207/184168/format_affiche/el-insulto.jpg",
                         "https://medias.unifrance.org/medias/14/217/186638/format_web/la-aparicion.jpg",
                         "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTB8jpZ3hN8Tqxwmhb5X5alQYH7vJKTyFBczooAJxIzSW2ijVtsNg",

                           };
int hardDuracion[10]={120,90,220,90,150,96,72,140,120,120};
char hardDescripcion[10][5000]={"Deadpool 2​ es una película de superhéroes basada en el personaje de Marvel Comics Deadpool,distribuida por 20th Century Fox. Es la duodécima película de la saga de películas de X-Men,y una secuela directa de Deadpool la película de 2016.",
                                "Luis es un solitario niño de 12 años que no tiene ningún amigo. Su padre, el ufólogo Armin Sonntag, simplemente no tiene tiempo para él: está obsesionado con probar la existencia de vida inteligente en el espacio y pasa toda la noche en el telescopio y todo el día durmiendo. ",
                                "Al conejo Peter y sus tres hermanas les encanta pasar el día en el huerto del señor McGregor, aunque a él no le agrada en absoluto que lo hagan. El señor McGregor trama un plan tras otro para deshacerse de ellos, pero Peter no es un conejo corriente.",
                                "Chloe y su madre se ven obligadas a mudarse a una casa con gnomos en el jardín.",
                                "Este clásico filme de suspenso muestra al ejecutivo de publicidad",
                                "En julio de 1976, varios soldados israelíes intentan rescatar a los 240 pasajeros de un avió"
                                "Un gorila, un lobo y una serpiente sufren una mutación genética y se convierten en seres gigantescos y violentos.",
                                "El insulto es una película de drama libanesa de 2017 dirigida por Ziad Doueiri y coescrita por Doueiri y Joelle Touma.",
                                "Jacques es un reportero de un diario francés que recibe una misteriosa llamada del Vaticano.",
                                "Delphine (Emmanuelle Seigner) es la autora de una novela muy personal dedicada a su madre que se ha convertido en best-seller. Exhausta y en crisis, ."};
int hardID[10]={1,2,3,4,5,6,7,8,9,10};
int hardStatus[10]={1,1,1,1,1,1,1,1,1,1};
int hardPuntaje[10]={5,5,2,4,3,2,3,4,2,5};



    for(int i=0;i<tamanio;i++)
    {
        strcpy(Peliculas[i].titulo, hardTitulo[i]);
        strcpy(Peliculas[i].genero, hardGenero[i]);
        strcpy(Peliculas[i].link, hardLink[i]);
        Peliculas[i].duracion = hardDuracion[i];
        strcpy(Peliculas[i].descripcion, hardDescripcion[i]);
        Peliculas[i].id = hardID[i];
        Peliculas[i].estado = hardStatus[i];
        Peliculas[i].puntaje = hardPuntaje[i];

    }

}

