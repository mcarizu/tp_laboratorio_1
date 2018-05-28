#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
typedef struct{int estado;int id; char titulo  [20]; char genero [20]; int duracion;char descripcion [20]; int puntaje; char link}eMovie ;

int agregarPelicula(eMovie [], int, char mensaje);
int borrarPelicula(eMovie [],int, char mensaje);
int modificarPelicula(eMovie [],int,int, char mensaje);
int buscarVacio(eMovie [], int);
int buscaIdPelicula(eMovie []; int, int);
int listadoPeliculas(eMovie [], int);
void listaPrlicula(eMovie [], int);
void initStruct(eMovie [],int,int);



#endif // MOVIE_H_INCLUDED
