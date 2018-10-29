#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "stdfix.h"
#include <time.h>
#include "program.h"
#define LATITUD -45.034167
#define LONGITUD 168.662000

int main()
{
    int puntaje = 0;

    inicio();
    title();
    menuP();
    preguntarNombre();
    instrucciones();
    system("cls");
    printf("\n");
    Type("* Que historia la nuestra");
    Type(", no?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Uno(puntaje);
    system("cls");
    Type("* De un dia de no conocernos");
    Type(".");
    Type(".");
    Type(".\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Dos(puntaje);
    system("cls");
    Type("* ... a otro de enamorarnos perdidamente.\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Tres(puntaje);
    system("cls");
    Type("* Cambiar");
    printf("%c", 141);
    Type("as la historia?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Cuatro(puntaje);
    system("cls");
    Type("* Te arrepentis de algo?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Cinco(puntaje);
    system("cls");
    Type("* Es real o solo una forma de enga");
    printf("%c", 164);
    Type("arse a uno mismo?\n");
    printf("\n");
    printf("\n");
    /*puntaje = pregunta_Seis(puntaje);
    puntaje = pregunta_Siete(puntaje);
    puntaje = pregunta_Ocho(puntaje);
    puntaje = pregunta_Nueve(puntaje);
    puntaje = pregunta_Diez(puntaje);*/
    return 0;
}
