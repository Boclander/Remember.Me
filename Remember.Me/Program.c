#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "stdfix.h"
#include <time.h>
#include "program.h"

void inicio(void)
{
    system("cls");

    FILE* pArchivo;
    char image[50][100];
    int i = 0;

    pArchivo = fopen("Inicio.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(image[i], 100, pArchivo);
        i++;
    }
    for(i=0; i<5; i++)
    {
        printf("%s", image[i]);
    }
    fclose(pArchivo);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                                 Developed by: Me 28/10/18\n");
    system("pause");
}

void title(void)
{
    system("cls");

    FILE* pArchivo;
    char image[50][100];
    int i = 0;

    pArchivo = fopen("Inicio.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(image[i], 100, pArchivo);
        i++;
    }
    for(i=0; i<5; i++)
    {
        printf("%s", image[i]);
    }
    fclose(pArchivo);
}

void Type(const char* p)
{
    if(p != NULL)
    {
        while(*p)
        {
            printf("%c|", *p++);
            ;;Sleep(40);
            printf("\b \b");
            ;;Sleep(40);
        }
        ;;Sleep(600);
    }
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}

void menuP(void)
{
    FILE* pArchivo;
    char image[50][100];
    int i = 0;

    printf("\n");
    printf("\n");
    Type("* Esto es algo que hice solo para vos.\n");
    printf("\n");
    Type("* Es mi primer proyecto asi que algunas cosas podrian salir mal.\n");
    printf("\n");
    Type("* Lo hice para poder dejarte algo que nadie mas pudiera.\n");
    printf("\n");
    Type("* Asi que preparate un t");
    printf("%c", 130);
    Type(", ponete c");
    printf("%c", 149);
    Type("moda y disfruta.\n");
    printf("\n");
    Type("* Pd: ");
    Type("Hay un archivo con m");
    printf("%c", 151);
    Type("sica, tal vez la quieras escuchar mientras tanto.\n");

    pArchivo = fopen("StartArrow.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(image[i], 100, pArchivo);
        i++;
    }
    for(i=0; i<5; i++)
    {
        printf("%s", image[i]);
    }
    fclose(pArchivo);
    printf("\n");
    printf("\n");

    system("pause");

}

void preguntarNombre(void)
{
    system("cls");

    char nombre[50];

    printf("Ingrese nombre: \n");
    printf("\n");
    gets(&nombre);

    if(strcmp(nombre ,"Lara") != 0 && strcmp(nombre, "Lara Petersen") != 0 && strcmp(nombre, "lara") != 0)
    {
        exit(EXIT_SUCCESS);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    delay(2);
    printf("\n");
    Type("* Hola Larita.\n");
    printf("\n");
    delay(2);
    Type("* Te extra");
    printf("%c", 164);
    Type("o.\n");
    printf("\n");
    printf("\n");
    system("pause");
}

void instrucciones(void)
{
    system("cls");

    Type("* Hay 10 preguntas que quiero hacerte.\n");
    printf("\n");
    Type("* Te dej");
    printf("%c", 138);
    Type(" un regalo, pero solo vas a poder verlo si contestas todas.\n");
    printf("\n");
    Type("* Vas a saber cuantas contestaste bien, pero no cuales.\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    delay(3);
    Type("Lista?\n");
    printf("\n");
    system("pause");
}

int pregunta_Uno(int puntaje)
{
    char rta[15];

    system("pause");
    system("cls");
    delay(1);
    printf("\n");
    printf("\n");
    Type("      1. Cual era mi signo del Zodiaco?\n");
    printf("\n");
    printf("\n");
    gets(&rta);

    if(strcmp(rta, "Acuario") == 0 || strcmp(rta, "acuario") == 0)
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Dos(int puntaje)
{
    char rta;

    system("pause");
    system("cls");
    delay(1);
    printf("\n");
    printf("\n");
    Type("      2. Quien fue el causante de todo esto?\n");
    printf("\n");
    delay(1);
    printf("\n");
    printf("            A) Yo.              B) Vos.\n");
    printf("\n");
    printf("\n");
    fflush(stdin);
    scanf("%c", &rta);
    fflush(stdin);

    if(rta == 'B' || rta == 'b')
    {
        delay(1);
        Type("* >_>\n");
        Type("* Mentirosa.\n");
    }
    if(rta == 'A' || rta == 'a')
    {
        puntaje++;
        delay(1);
        Type("* Ja.\n");
        Type("* Al fin lo aceptaste.\n");
        delay(2);
    }
    return puntaje;
}

int pregunta_Tres(int puntaje)
{
    char rta;

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      3. De que color son mis ojos?\n");
    printf("\n");
    delay(1);
    printf("\n");
    printf("        A) Verdes.           B) Miel.\n");
    printf("\n");
    printf("        C) Marrones.         D) Azules.\n");
    printf("\n");
    printf("\n");
    fflush(stdin);
    scanf("%c", &rta);
    fflush(stdin);

    if(rta == 'a' || rta == 'A')
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Cuatro(int puntaje)
{
    char rta[3];

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      4. Crees que yo cambiar");
    printf("%c", 141);
    Type("a el pasado?\n");
    printf("\n");
    delay(1);
    printf("\n");
    gets(&rta);

    if(strcmp(rta, "No") == 0 || strcmp(rta, "no") == 0)
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Cinco(int puntaje)
{
    char rta [20];

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      5. Donde vamos a reencontrarnos?\n");
    delay(1);
    printf("\n");
    printf("\n");
    gets(&rta);

    if(strcmp(rta,"New Zealand")==0||strcmp(rta,"new zealand")==0||strcmp(rta,"Nueva Zelanda")==0||strcmp(rta,"nueva zelanda"==0))
    {
        puntaje++;

        FILE* pArchivo;
        char image[50][100];
        int i = 0;

        pArchivo = fopen("SilverFern.txt", "r");
        while(!feof(pArchivo))
        {
            fgets(image[i], 100, pArchivo);
            i++;
        }
        for(i=0; i<50; i++)
        {
            printf("%s", image[i]);
        }
        fclose(pArchivo);
    }
    delay(2);
    return puntaje;
}
