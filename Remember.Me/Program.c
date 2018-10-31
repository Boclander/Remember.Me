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
    printf("                                                            V 0.0.1\n");
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

int pregunta_Seis(int puntaje)
{
    int rta;

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      6. Que numero era nuestra habitacion?\n");
    delay(1);
    printf("\n");
    printf("\n");
    scanf("%d", &rta);

    if(rta == 12)
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Siete(int puntaje)
{
    char rta;

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      7. Que pedimos la primera vez que fuimos a tomar caf");
    printf("%c?\n", 130);

    delay(1);
    printf("\n");
    printf("\n");
    Type("      A) T");
    printf("%c", 130);
    Type(" de frutos rojos y Mocha.         B) Macchiato y Mocha.\n");
    printf("\n");
    Type("      C) Macchiato y Avellana.               D) Ninguna de las anteriores.\n");
    printf("\n");
    printf("\n");
    fflush(stdin);
    scanf("%c", &rta);
    fflush(stdin);

    if(rta == 'c' || rta == 'C')
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Ocho(int puntaje)
{
    char rta;

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      8. Me gusta mas dar besos o recibirlos?\n");
    printf("\n");
    printf("\n");
    printf("        A) Darlos.           B) Recibirlos.\n");
    printf("\n");
    printf("\n");
    fflush(stdin);
    scanf("%c", &rta);
    fflush(stdin);

    if(rta == 'b' || rta == 'B')
    {
        puntaje++;
    }
    delay(1);
    return puntaje;
}

int pregunta_Nueve(int puntaje)
{
    char rta;

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      9. Nos guiamos por el cerebro o el corazon?\n");
    printf("\n");
    printf("\n");
    printf("        A) Cerebro.           B) Coraz%cn.\n", 149);
    printf("\n");
    printf("\n");
    fflush(stdin);
    scanf("%c", &rta);
    fflush(stdin);

    if(rta == 'b' || rta == 'B')
    {
        puntaje++;
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                      ");
        Type("<");
        delay(2);
        Type("3");
    }

    delay(2);
    return puntaje;
}

int pregunta_Diez(int puntaje)
{
    char rta[8];

    system("pause");
    system("cls");
    delay(1);

    printf("\n");
    printf("\n");
    Type("      10.");
    Type(" After");
    Type(" all");
    Type(" this");
    Type(" time");
    Type("?\n");
    printf("\n");
    printf("\n");
    gets(&rta);

    if(strcmp(rta, "Always.") == 0 || strcmp(rta, "Always") == 0 || strcmp(rta, "always.") == 0 || strcmp(rta, "always") == 0)
    {
        puntaje++;
    }
    delay(2);
    return puntaje;
}

void recuentoPuntaje(int puntaje)
{
    FILE* pArchivo;
    char image[50][100];
    int i = 0;

    switch(puntaje)
    {
    case 0:
        cuatroEspacios();
        pArchivo = fopen("0-10.txt", "r");
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
        break;
    case 1:
        cuatroEspacios();
        pArchivo = fopen("1-10.txt", "r");
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
        break;
    case 2:
        cuatroEspacios();
        pArchivo = fopen("2-10.txt", "r");
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
        break;
    case 3:
        cuatroEspacios();
        pArchivo = fopen("3-10.txt", "r");
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
        break;
    case 4:
        cuatroEspacios();
        pArchivo = fopen("4-10.txt", "r");
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
        break;
    case 5:
        cuatroEspacios();
        pArchivo = fopen("5-10.txt", "r");
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
        break;
    case 6:
        cuatroEspacios();
        pArchivo = fopen("6-10.txt", "r");
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
        break;
    case 7:
        cuatroEspacios();
        pArchivo = fopen("7-10.txt", "r");
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
        break;
    case 8:
        cuatroEspacios();
        pArchivo = fopen("8-10.txt", "r");
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
        break;
    case 9:
        cuatroEspacios();
        pArchivo = fopen("9-10.txt", "r");
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
        break;
    case 10:
        caseDiez();
        coordenadas();
        break;
    }

}

void cuatroEspacios(void)
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

void caseDiez(void)
{
    cuatroEspacios();
    Type("              * Wow...\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * Despues de tanto...\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * No crei que te acordaras de mi.\n");
    delay(2);

    system("cls");

    cuatroEspacios();
    Type("              * Tal vez tenias razon.\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * Tal vez no fue la mejor forma.\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * Ni el mejor momento.\n");
    delay(2);
    printf("\n");
    printf("\n");

    system("cls");

    cuatroEspacios();
    Type("              * Pero fue perfecto.\n");
    delay(3);
    printf("\n");
    printf("\n");

    system("cls");

    cuatroEspacios();
    Type("              * Ah, cierto.\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * El premio.\n");
    delay(2);
    printf("\n");
    printf("\n");

    system("cls");

    cuatroEspacios();
    Type("              * ¿Sabes?\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * En realidad ya estaba destinado.\n");
    delay(2);
    printf("\n");
    printf("\n");
    Type("              * Todo lo que hiciste para llegar hasta aca.\n");
    delay(2);
    printf("\n");
    printf("\n");

    system("cls");

    cuatroEspacios();
    Type("              * Y una vez mas me probaste que valemos la pena.\n");
    delay(2);
    printf("\n");
    printf("\n");

    system("cls");

    cuatroEspacios();
    Type("               T ");
    Type("E ");
    Type("  ");
    Type("A ");
    Type("M ");
    Type("O ");
    Type("  ");
    Type("L ");
    Type("A ");
    Type("R ");
    Type("A ");
    Type(".\n");
}

void coordenadas(void)
{
    system("cls");
    cuatroEspacios();
    printf("            -45.034167              168.662000\n");
    printf("\n");
    printf("\n");
    printf("                     * I'm waiting\n");
    cuatroEspacios();
    printf("               -->    https://photos.app.goo.gl/7vQHQrCFwKU4M2Ks9\n");
    system("pause");
}
