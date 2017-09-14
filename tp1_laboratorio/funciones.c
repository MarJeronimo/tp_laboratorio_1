#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

/** \brief Pide un dato de tipo entero al usuario. Valida que el dato ingresado sea un numero. En caso de error pregunta al usuario
 *         desea ingresar nuevamente un numero.
 * \param  int* Puntero a entero. Es el dato a pasar por referencia
 * \param  char Mesaje que solicita el dato al usuario
 * \param  char Mensaje en caso de detectar error
 * \param  char Mensaje que repregunta al usuario si desea ingresar nuevamente un dato
 * \return (0) Si la función da error o si el usuario no desea ingresar un dato
 *         (1) Si el dato fue ingresado correctamente
 */
int getInt(int* pZ, char msg[50], char Errmsg[70], char Rmsg[50])
{
  char r = 's';
  register int i = 0;
  char str[11];

  fflush(stdin);
  printf("%s", msg);
  gets(str);

        while((str[i] != '\0' && r == 's'))
        {
            if((str[i] < '0') || (str[i] > '9'))
            {
                printf("\n%s", Errmsg);
                printf("\n%s", Rmsg);
                clearerr(stdin);
                fflush(stdin);
                r = getchar();
                if(r == 'n')
                    return 0;
                else
                {
                    fflush(stdin);
                    printf("%s", msg);
                    gets(str);
                    i = (-1);
                }

            }
            i++;
        }
    *pZ =atoi(str);

    return 1;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int validNum(char str[15])
{
    int register i = 0;
    int err_counter = 0;

    while(str[i] != '\0')
    {
        if(((str[i] < '0') || (str[i] > '9')) && !(str[i] == '.'))
            err_counter--;
        i++;
    }
    if(err_counter < 0)
        return err_counter;

    return 0;
}

/** \brief Valida que una cadena de caracteres numérica tenga solamente un punto
 *
 * \param str Es la cadena de caracteres que recibe por valor
 * \param ---
 * \return (dot_counter) Un numero menor a cero. Cuanto menor es el número negativo, mayor es
 *         la cantidad de puntos que tiene la cadena de caracteres.
 *         (0) Si la cadena de caracteres ingresada no tiene mas de un punto.
 */
int validDot(char str[15])
{
    register int i = 0;
    int dot_counter = 1;

    while(str[i] != '\0')
    {
        if(str[i] == '.')
        {
            dot_counter--;
        }
        i++;
    }
    if(dot_counter < 0)
        return dot_counter;
    return 0;
}

/** \brief Pide un dato de tipo flotante al usuario. Valida que el dato ingresado sea un numero.
 *         En caso de error pregunta al usuario si desea ingresar nuevamente un numero.
 *
 * \param  int* Puntero a entero. Es el dato a pasar por referencia
 * \param  char Mesaje que solicita el dato al usuario
 * \param  char Mensaje en caso de detectar error
 * \param  char Mensaje que repregunta al usuario si desea ingresar nuevamente un dato
 * \return (0) Si la función da error o si el usuario no desea ingresar un dato
 *         (1) Si el dato fue ingresado correctamente
 */
int getFloat(double* fNum, char msg[50], char errmsg[70], char reQuestion_msg[50])
{
    char str[15];
    char seguir = 'n';
    register unsigned int x, y;
    unsigned int retorno = 0;

    fflush(stdin);
    printf("\n%s", msg);
    gets(str);


    do{
        x = validDot(str);
        y = validNum(str);
        if((x != 0) || (y != 0))
        {
            printf("\n%s", errmsg);
            printf("\n%s", reQuestion_msg);
            clearerr(stdin);
            if(tolower(seguir = getchar()) != 'n')
            {
                system("cls");
                fflush(stdin);
                printf("\n%s", msg);
                gets(str);
            }
            else
            {
                retorno = 1;
            }
        }
        else
            seguir = 'n';
    }while(seguir != 'n');

    if(retorno)
        return 1;

    *fNum = atof(str);

    return 0;
}

/** \brief Pide al usuario ingrese un texto, y lo indirecciona al parámetro que recibe por referencia la funcion
 *
 * \param *str Puntero que indirecciona la cadena de caracteres a la direccion de memoria pasada por referencia
 * \param  msg El mensaje que le pide al usuario que ingrese un texto
 * \return La cantidad de caracteres ingresados.
 *         (-1) Si ocurrió un error.
 */
int getStr(char* str, char msg[50])
{
    char* pAux = str;
    register int i = 0;
    int l = -1;
    fflush(stdin);
    printf("\n%s", msg);
    while(1)
    {
        pAux[i] = getche();
            if(pAux[i] == 27)
                break;
        i++;
    }
    pAux[i] = '\0';

    l = strlen(pAux);

    return l;
}
