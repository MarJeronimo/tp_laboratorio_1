#include <stdio.h>
#include <stdlib.h>



int ingresar_Op1_Operando(float* op1, char* dato)
{
    fflush(stdin);
    scanf("%f", op1);
    fflush(stdin);
    scanf("%c",dato);
    if(*dato=='!')
        return 1;

    return 0;
}

void ingresarOp2(float* op2)
{
    fflush(stdin);
    scanf("%f", op2);

    return;
}


float suma(float x, float y)
{
    float resultado = x + y;
    return(resultado);
}

float resta(float x, float y)
{
    float resultado = x - y;
    return(resultado);
}

float multiplicacion(float x, float y)
{
    float resultado = x * y;
    return(resultado);
}

float division(float x, float y)
{
    if(y == 0){
        printf("No se puede dividir por 0\n\n");
        exit(1);
    }
    float resultado = x / y;
    return(resultado);
}

float factorial(float x)
{
    float productoria = 1;
    int i;
    for(i=1; i<=x; i++)
        productoria *= i;
    return (productoria);
}
void mostarFunciones(char* respuesta, float* x, float* y)
{

    fflush(stdin);
    scanf("%c", respuesta);
    if(*respuesta == 's')
    {

        printf("\nEstas son las operaciones que realiza esta calculadora");
        printf("\n\nA = %.2f    B = %.2f\n\n", *x, *y);
        float r1 = suma(*x,*y);
        float r2 = resta(*x,*y);
        float r3 = multiplicacion(*x,*y);
        float r4 = division(*x,*y);
        float r5 = factorial(*x);
        printf("\nSUMA: %.2f\nRESTA: %.2f\nMULTIPLICACION: %.2f\nDIVISION: %.2f\nFACTORIAL: %.2f",r1, r2, r3, r4, r5);
    }


    return;
}

