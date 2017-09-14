#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones_ARITMETICAS.h"

void FUNCION_MENU(void);

enum MENU OPCION;
double A, B;

int main()
{

    FUNCION_MENU();
    OPCION = Inicio();

    while(!(OPCION == 9) && !(OPCION == 0))
    {
        CALCULADORA(OPCION, &A, &B);
        OPCION = LOOP();
    }

    CLOSE();

    return 0;
}
