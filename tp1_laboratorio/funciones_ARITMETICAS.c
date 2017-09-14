#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones_ARITMETICAS.h"
#include "funciones.h"



enum BOOLEAN validacionOpcionMenu(int a)
{
    switch(a)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            return TRUE;
        default:
            return FALSE;
    }
}


/*int ingresarOpcion( enum MENU* X, char msg[50])
{
    int r;

    fflush(stdin);
    printf("\n%s"; msg);
    scanf("%d", X);
    r = validacionOpcionMenu(X);
    if(!(r))
    {
        perror("El dato ingresado es incorrecto");
        *X = 0;
        return (-1);
    }
    return 0
}*/

int Inicio()
{
    int w;
    char q = 's';
    enum BOOLEAN retorno;
    do{
        fflush(stdin);
        printf("\nSeleccione una opcion para comenzar: ");
        scanf("%d", &w);
        if((retorno = validacionOpcionMenu(w)) == FALSE)
        {
            perror("\nLa opcion ingresada es incorrecta");
            printf("\nDesea intentarlo nuevamente? s/n");
        }
        fflush(stdin);
    }while(!(retorno) && tolower(q = getchar()) != 'n');
        if(q != 's')
            return 9;
    return w;
}
int LOOP()
{
    int w;
    fflush(stdin);
    printf("\n\n%15s\t", "Seleccione opcion ");
    scanf("%d", &w);

    return w;
}
void CLOSE()
{
    system("cls");
    printf("\n\t\t\t\t==============================\n");
    printf("\t\t\t\t%s%3c%4s%3s%4s%3s%4s%3s%4s", "||", '!', "||", "/", "||", "*", "||", "-", "||");
    printf("\n\t\t\t\t==============================\n");
    printf("\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 7, "||", 8, "||", 9, "||", "||");
    printf("\n\t\t\t\t=======================%3s%4s\n", "+", "||");
    printf("\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 4, "||", 5, "||", 6, "||", "||");
    printf("\n\t\t\t\t==============================\n");
    printf("\t\t\t\t%s%3d%4s%3d%4s%3d%4s%7s", "||", 1, "||", 2, "||", 3, "||", "||");
    printf("\n\t\t\t\t=======================%s%s\n", "Intro", "||");
    printf("\t\t\t\t%s%7d%7s%3c%4s%7s", "||", 0, "||", '.', "||", "||");
    printf("\n\t\t\t\t==============================\n");
    printf("\n\n\t\t\t%42s", "Gracias por usar nuestra aplicacion!!!");
    printf("\n\n\n\n");
    //system("pause");
    clearerr(stdin);
    fflush(stdin);
    printf("Para terminar presione una tecla..."); getch();
    printf("\n\n\n\n");
}
double suma(double x, double y)
{
    return (x) + (y);
}
double resta(double x, double y)
{
    return (x) - (y);
}
double multiplicacion(double x, double y)
{
    return (x) * (y);
}
double division(double x, double y)
{
    if(y == 0)
    {
        perror("No es posible dividir por 0");
        return(-1);
    }

    return (x) / (y);
}
double factorial(double n)
{
    register int i;
    double producto = 1;
    if(n == 0)
        return 1;
    for(i=1; i <= n; i++)
    {
        producto *= i;
    }
    return producto;
}
void MOSTRAR_TODOS_LOS_CALCULOS(double x, double y)
{
    //double rSuma, rResta, rDivision, rMultiplicacion, rFactorial;
    printf("\n\t%s\t%.4f\t%.4f", "OPERANDOS", x, y);
    printf("\n\n");
    printf("\n\t%s\t\t=   %8.2f", "SUMA", suma(x, y));
    printf("\n\t%s\t\t=   %8.2f", "RESTA", resta(x, y));
    printf("\n\t%s\t=\t%6.4f", "DIVISION", division(x, y));
    printf("\n\t%s\t=\t%6.4f", "MULTIPLICACION", multiplicacion(x, y));
    printf("\n\t%s\t=\t%6.4f", "FACTORIAL (A!)", factorial(x));
    printf("\n\n");
}
void CALCULADORA(enum MENU NUM, double* X, double* Y)
{
    double resultado;
    switch(NUM)
    {
        case OP1:
        {
            getFloat(X, "Ingrese el 1er operando ", "El dato debe ser numerico", "Desea intentarlo nuevamente? s/n" );
            break;
        }
        case OP2:
        {
            fflush(stdin);
            getFloat(Y, "Ingrese el 2do operando ", "El dato debe ser numerico", "Desea intentarlo nuevamente? s/n");
            break;
        }
        case SUMAR:
        {
           resultado = suma(*X, *Y);
           printf("\n%8.2f + %8.2f = %8.2f", *X, *Y, resultado);
           break;
        }
        case RESTAR:
        {
            resultado = resta(*X, *Y);
            printf("\n%8.2f - %8.2f = %8.2f", *X, *Y, resultado);
            break;
        }
        case DIVIDIR:
        {
            resultado = division(*X, *Y);
            if(resultado < 0)
                exit(resultado);
            printf("\n%6.4f / %6.4f = %6.4f", *X, *Y, resultado);
            break;
        }
        case MULTIPLICAR:
        {
            resultado = multiplicacion(*X, *Y);
            printf("\n%6.4f * %6.4f = %6.4f", *X, *Y, resultado);
            break;
        }
        case FACTORIAL:
        {
            resultado = factorial(*X);
            printf("\n%3.2f! = %6.4f", *X, resultado);
            break;
        }
        case TODOS_LOS_CALCULOS:
        {
            MOSTRAR_TODOS_LOS_CALCULOS(*X, *Y);
            break;
        }
        case SALIR:
        {
            break;
        }
        default:{ break;}
    }
}
