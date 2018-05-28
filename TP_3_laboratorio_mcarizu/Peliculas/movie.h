#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
typedef struct{int estado;int id; char titulo  [20]; char genero [20]; int duracion;char descripcion [20]; int puntaje; char link[20]}eMovie ;

int agregarPelicula(eMovie [], int, char );
int borrarPelicula(eMovie [],int, char );
int modificarPelicula(eMovie [],int,int, char );
int buscarVacio(eMovie [], int);
int buscaIdPelicula(eMovie [], int, int);
int listadoPeliculas(eMovie [], int);
void listaPrlicula(eMovie [], int);
void initStruct(eMovie [],int,int);
void menu(eMovie [],int );
void HardCode(eMovie [], int);



#endif // MOVIE_H_INCLUDED
