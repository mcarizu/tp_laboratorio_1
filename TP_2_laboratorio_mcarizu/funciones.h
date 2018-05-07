#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;


int ingresarPersona(EPersona listaPersonas[],int);
int bajaPersona(EPersona listaPersonas[],int);
int modificarPersona(EPersona listaPersonas[]);
int obtenerEspacioLibre(EPersona listaPersonas[],int);
int buscarPorDni(EPersona listaPersonas[],int, int );
int listadoDePersonas(EPersona listaPersona[],int );
void hardCode(EPersona listaPersona[]);
void ordenarListadoPersonas(EPersona listaPersona[], int);
void GraficoEdadPersonas (EPersona listaPersona[], int);
#endif // FUNCIONES_H_INCLUDED
