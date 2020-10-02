
/** Autor: Leonel Godoy
 *  Fecha: 20-09-2020
 *  Email: godoyutn@gmail.com
 * \param
 * \param
 * \return
 *
 1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
2 Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.
 */

#include <stdio.h>
#include <stdlib.h>
#include "misOperaciones.h"


int main()
{
    int salir=0;
    int x;
    int y;
    int exitoAlCargarX=0;
    int exitoAlCargarY=0;
    int suma;
    int resta;
    int producto;
    float cociente;
    int factorialDeX;
    int factorialDeY;
    int exitoSuma;
    int exitoResta;
    int exitoProducto;
    int exitoCociente;
    int exitoFactorialX;
    int exitoFactorialY;

    do
    {

        //mostrarmenu
        switch(menu(&exitoAlCargarX, &exitoAlCargarY, x, y))
        {
        case 1:
            //cargar x
            if(cargarVariable(&x)==0)
            {
                printf("\nCargado con exito\n");
                exitoAlCargarX=1;
                system("pause");
            }
            break;

        case 2:
            //cargar y
            if(cargarVariable(&y)==0)
            {
                printf("\nCargado con exito\n");
                exitoAlCargarY=1;
                system("pause");
            }
            break;

        case 3:
            //operaciones. opera e informa exito o no de la tarea
            if(exitoAlCargarX && exitoAlCargarY)
            {
            exitoSuma = sumar(&suma, x,y);
            exitoResta = restar(&resta, x, y);
            exitoProducto = multiplicar(&producto, x, y);
            exitoCociente = dividir(&cociente, x, y);
            exitoFactorialX = sacarFactorial(&factorialDeX, x);
            exitoFactorialY = sacarFactorial(&factorialDeY, y);
            printf("\nOperaciones realizadas...\n");
            system("pause");
            }
            else
            {
                printf("\n***Al parecer aun no ha cargado ambos los valores\n");
                system("pause");
            }
            break;

        case 4:
            printf("\nValor de x:%d", x);
            printf("\nValor de y:%d", y);
            //show results
            //la parte que sigue es MUY poco performante
            //es derrochar computo.
            if(exitoSuma==0)
            {
                printf("\n%d + %d = %d",x,y, suma);
            }

            if(exitoResta==0)
            {
                printf("\n%d - %d = %d", x,y,resta);
            }

            if(exitoProducto==0)
            {
                printf("\n%d * %d = %d",x,y,producto);
            }

            if(exitoCociente==0)
            {
                printf("\n%d / %d = %f",x,y,cociente);
            }
            else
            {
                printf("\n***No se pudo realizar la division\n");
            }

            if(exitoFactorialX==0)
            {
                printf("\n  %d! = %d", x, factorialDeX);
            }
            if(exitoFactorialY==0)
            {
                printf("\n  %d! = %d\n",y,factorialDeY);
            }


            system("pause");
            break;

        case 5:
            printf("\n\n***Confirma salida? s/n: ");
            fflush(stdin);
            if(getchar()=='s')
            {
                salir =1;
            }

            //salir del programa
            break;
            /*
                    case 6://para debuggin
                        printf("\n***Control \n");
                        printf("\nExito al cargar x %d", exitoAlCargarX);
                        printf("\nExito al cargar y %d", exitoAlCargarY);
                        printf("\nvalor x: %d", x);
                        printf("\nvalor y: %d", y);
                    system("pause");
            */
        }
    }
    while(salir==0);

    return 0;
}
