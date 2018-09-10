#include <stdio.h>
#include <stdlib.h>

void cargarYMostrar(int vector[], int cantidad, int inicializador);
void inicializarVector (int vector[], int cantidad, int inicializador);
void mostrarVector (int vector[], int cantidad);

int main()
{
    int cantidad=100;
    int vector [cantidad];
    int inicializador=-1;

    cargarYMostrar(vector, cantidad, inicializador);
    return 0;
}

void cargarYMostrar(int vector[], int cantidad, int inicializador)
{
    inicializarVector(vector, cantidad, inicializador);
    mostrarVector(vector, cantidad);
}

void inicializarVector (int vector[], int cantidad, int inicializador)
{
    for(; cantidad>0; cantidad--)
    {
        vector[cantidad]=inicializador;

    }
}

void mostrarVector (int vector[], int cantidad)
{
    for(; cantidad>0; cantidad--)
        printf("%d\n",vector[cantidad]);
}
