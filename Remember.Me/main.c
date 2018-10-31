#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "stdfix.h"
#include <time.h>
#include "program.h"

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
    printf("\n");
    Type("*  Q u e   h i s t o r i a   l a   n u e s t r a ");
    Type(" ,   n o ? \n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Uno(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  D e   u n   d i a   d e   n o   c o n o c e r n o s ");
    Type(" . ");
    Type(". ");
    Type(". \n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Dos(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  . . .   a   o t r o   d e   e n a m o r a r n o s   p e r d i d a m e n t e . \n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Tres(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  C a m b i a r ");
    printf("%c ", 141);
    Type("a s   l a   h i s t o r i a ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Cuatro(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  T e   a r r e p e n t i s   d e   a l g o ? \n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Cinco(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  E s   r e a l   o   s o l o   u n a   f o r m a   d e   e n g a ");
    printf("%c ", 164);
    Type("a r s e   a   u n o   m i s m o ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Seis(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  Q u e   s o m o s   h o y ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Siete(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  O   q u e   p u d i m o s   h  a b e r   s i d o ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Ocho(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  V e s   t u   v i d a   d e   o t r a   f o r m a ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Nueve(puntaje);
    system("cls");
    printf("\n");
    printf("\n");
    Type("*  A   q u e   a t r i b u i m o s   n u e s t r o s   s e n t i m i e n t o s ?\n");
    printf("\n");
    printf("\n");
    puntaje = pregunta_Diez(puntaje);
    recuentoPuntaje(puntaje);

    return 0;
}
