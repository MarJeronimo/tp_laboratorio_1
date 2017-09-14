#ifndef FUNCIONES_ARITMETICAS_H_INCLUDED
#define FUNCIONES_ARITMETICAS_H_INCLUDED


#endif // FUNCIONES_ARITMETICAS_H_INCLUDED

#ifndef _MENU_DEFINED
#define _MENU_DEFINED
enum MENU
{
    OP1 = 1,
    OP2,
    SUMAR,
    RESTAR,
    DIVIDIR,
    MULTIPLICAR,
    FACTORIAL,
    TODOS_LOS_CALCULOS,
    SALIR
};
#endif // _MENU

#ifndef _BOOLEAN_DEFINED
#define _BOOLEAN_DEFINED
enum BOOLEAN
{
    FALSE = 0,
    TRUE,
};
#endif // _BOOLEAN

enum BOOLEAN validacionOpcionMenu(int a);
int Inicio();
int LOOP();
void CLOSE();
double suma(double , double );
double resta(double , double );
double multiplicacion(double , double );
double division(double , double );
double factorial(double );
void MOSTRAR_TODOS_LOS_CALCULOS(double , double );
void CALCULADORA(enum MENU NUM, double* , double* );

