#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int getInt(int* pZ, char msg[50], char Errmsg[70], char Rmsg[50]);
void getFloat(double* Fnum, char msg[50], char Errmsg[70], char Qmsg[50]);
int validNum(char str[15]);
int validDot(char str[15]);
int getStr(char* str, char msg[50]);

#endif // FUNCIONES_H_INCLUDED

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
