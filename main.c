#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"




/**
* \brief solicita dos numeros al usuario y devulve la operacion de acuerdo a la opcion que se ingrese
*
*
*/


int main()
{
    char seguir='s';
    int opcion=0;
    int nro1,nro2, resultado;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando  \n");
        printf("2- Ingresar 2do operando (B= nro2)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);




        switch(opcion)
        {
            case 1: printf("Ingresar primer numero:");
            scanf("%d",&nro1);
            if (nro1==0){
                    printf("Error, Ingrese un numero mayor a cero\n\n");

             }
                break;


            case 2: printf("Ingresar segundo numero:");
            scanf("%d",&nro2);
             if (nro2==0){
                    printf("Error, Ingrese un numero mayor a cero\n\n");
             }
                break;

            case 3: resultado = sumar(nro1,nro2);
            printf ("La suma es: %d\n\n", resultado);
                break;


            case 4: resultado = restar(nro1,nro2);
            printf ("La resta es: %d\n\n",resultado);
                break;

            case 5: resultado = dividir(nro1,nro2);
            printf ("La division es: %d\n\n", resultado);
                break;

            case 6: resultado = multiplicar(nro1,nro2);
            printf ("La multiplicacion es: %d\n\n", resultado);
                break;

            case 7: resultado = factorial(nro1);
                printf ("El factorial de %d es: %d\n\n", nro1, resultado);
                break;

            case 8: resultado = sumar(nro1,nro2);
            printf ("La suma es: %d\n\n", resultado);
                    resultado = restar(nro1,nro2);
            printf ("La resta es: %d\n\n",resultado);
                    resultado = dividir(nro1,nro2);
            printf ("La division es: %d\n\n", resultado);
                    resultado = multiplicar(nro1,nro2);
            printf ("La multiplicacion es: %d\n\n", resultado);
                    resultado = factorial(nro1);
            printf ("El factorial de %d es: %d\n\n", nro1, resultado);

                break;

            case 9:
                seguir = 'n';
                break;


        }



}return 0;
}
