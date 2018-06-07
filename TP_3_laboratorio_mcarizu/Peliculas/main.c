#include <stdio.h>
#include <stdlib.h>
#include"movie.h"
#include"validaciones.h"

#define TAM_html 10
#define TAM 20

int main()
{
int i;


    eMovie PeliculasHard [TAM_html];

    initStruct(PeliculasHard,TAM_html,0);

    hardCode(PeliculasHard,TAM_html);


    menuABM(PeliculasHard,TAM_html,"\nPeliculas\nIngrese una Opcion\n");


    return 0;
}
