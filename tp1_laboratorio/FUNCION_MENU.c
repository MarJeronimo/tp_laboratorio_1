#include <stdio.h>
#include <stdlib.h>

void FUNCION_MENU(void)
{
    printf("\t======================================================================\n");
    printf("\t||\t\t\t\t%5s\t\t\t\t    ||\n", "MENU");
    printf("\t||\t\t\t\t\t\t\t\t    ||\n");
    printf("\t||\t\t\t%20s\t\t\t    ||\n", "CALCULADORA BASICA");
    printf("\t======================================================================\n");
    printf("\n\t\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\t\t%s%3c%4s%3s%4s%3s%4s%3s%4s", "||", '!', "||", "/", "||", "*", "||", "-", "||");
    printf("\n\t\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 7, "||", 8, "||", 9, "||", "||");
    printf("\n\t\t\t\t\t\t=======================%3s%4s\n", "+", "||");
    printf("\t\t\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 4, "||", 5, "||", 6, "||", "||");
    printf("\n\t\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 1, "||", 2, "||", 3, "||", "||");
    printf("\n\t\t\t\t\t\t=======================%s%s\n", "Intro", "||");
    printf("\t\t\t\t\t\t%s%7d%7s%3c%4s%7s", "||", 0, "||", '.', "||", "||");
    printf("\n\t\t\t\t\t\t==============================\n");
    printf("\n\n");
    printf("\t1- Ingresar 1er operando (A=x)\n");
    printf("\n\t2- Ingresar 2do operando (B=y)\n");
    printf("\n\t3- Calcular la suma (A+B)\n");
    printf("\n\t4- Calcular la resta (A-B)\n");
    printf("\n\t5- Calcular la division (A/B)\n");
    printf("\n\t6- Calcular la multiplicacion (A*B)\n");
    printf("\n\t7- Calcular el factorial (A!)\n");
    printf("\n\t8- Calcular todas las operaciones\n");
    printf("\n\t9- Salir\n\n");
    //system("pause");
    //printf("\n\n\n\n");
}
