#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float A, B;

int main()
{
    char operador, mostrar, seguir;
    float resultado;

    do{
    system("cls");
    int r = ingresar_Op1_Operando(&A, &operador);
    if(r == 0)
        ingresarOp2(&B);

    switch(operador){
    case '+':
        resultado = suma(A, B);
        break;
    case '-':
        resultado = resta(A, B);
        break;
    case '/':
        resultado = division(A, B);
        break;
    case '*':
        resultado = multiplicacion(A, B);
        break;
    case '!':
        resultado = factorial(A);
        break;

    }
    system("cls");
    printf("%.2f", resultado);
    printf("\nDesea conocer todas las funciones de esta calcudora? s/n");
    mostarFunciones(&mostrar,&A,&B);


    printf("\n\nDesea continuar?s/n");
    fflush(stdin);
    scanf("%c", &seguir);

    }while(seguir == 's');

    return 0;
}
