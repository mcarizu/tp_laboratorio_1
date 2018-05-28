#include <stdio.h>
#include <stdlib.h>
#include"movie.h"

#define TAM 10

int main()
{
    eMovie Peliculas [];
    eMovie HardFilms={{1,"La Casa Embrujada","Terror",120,"Una pelicula basada de un bets seller","cuak",5}{2,"El Campeon","Novela",140,"basada en echos reales","opss",5}{3,"Resplandor","Ficcion",220,"Dirigida por Rod Stiwar","apala",2}{4,"El patron del mal","Accion",90,"Una pelicula","oooo",4}{5,"El pobre","Ficcion",120," un bets seller","laput",3}{6,"Hola Saly","Comedia",96,"","epaepa",2}{7,"La Casa ","Comedia",72,"Una pelicula basada ","uyyy",3}{8,"AET Summer","Musical",140,"Las mejores canciones del 2016","eeeey",4}{9,"El mañana","Romance",120," un bets seller","yupi",2}{10,"Asesinos","Belicas",120,"Una pelicula basada en echos feales","lapucha",5}};

    initStruct(Peliculas,TAM,0);


    printf("Hello world!\n");
    return 0;
}
