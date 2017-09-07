#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float nro1,nro2, resultado;


    while(seguir=='s')
    {


        printf("\t1- Ingresar 1er operando %.2f \n", nro1);
        printf("\t2- Ingresar 2do operando %.2f\n", nro2 );
        printf("\t3- Calcular la suma (A+B)\n");
        printf("\t4- Calcular la resta (A-B)\n");
        printf("\t5- Calcular la division (A/B)\n");
        printf("\t6- Calcular la multiplicacion (A*B)\n");
        printf("\t7- Calcular el factorial (A!)\n");
        printf("\t8- Calcular todas las operaciones\n");
        printf("\t9- Salir\n\n");

        scanf("%d",&opcion);




        switch(opcion)
        {
        case 1:
            printf("Ingresar primer numero:");
            scanf("%f",&nro1);
            break;


        case 2:
            printf("Ingresar segundo numero:");
            scanf("%f",&nro2);
            break;

        case 3:
            resultado = sumar(nro1,nro2);
            printf ("La suma de %.2f y %.2f es: %.2f\n\n", nro1, nro2, resultado);
            break;


        case 4:
            resultado = restar(nro1,nro2);
            printf ("La resta de %.2f y %.2f es: %.2f\n\n",nro1, nro2,resultado);
            break;

        case 5:
            resultado = dividir(nro1,nro2);
            if (nro1==0||nro2==0){
                    printf("Error, no se puede dividir por 0. Reingrese\n");}
            else{
            printf ("La division entre %.2f y %.2f  es: %.2f\n\n",nro1,nro2, resultado);}
            break;

        case 6:
            resultado = multiplicar(nro1,nro2);
            printf ("La multiplicacion entre %.2f y %.2f es: %.2f\n\n",nro1,nro2, resultado);
            break;

        case 7:
            resultado = factorial(nro1);
            printf ("El factorial de %.2f es: %.2f\n\n", nro1, resultado);
            break;

        case 8:
            resultado = sumar(nro1,nro2);
            printf ("La suma es: %.2f\n\n", resultado);

            resultado = restar(nro1,nro2);
            printf ("La resta es: %.2f\n\n",resultado);

            resultado = dividir(nro1,nro2);
            if (nro1==0||nro2==0){
                    printf("Error, no se puede dividir por 0.Reingrese\n\n");}
            else{
            printf ("La division entre %.2f y %.2f  es: %.2f\n\n",nro1,nro2, resultado);}


            resultado = multiplicar(nro1,nro2);
            printf ("La multiplicacion es: %.2f\n\n", resultado);

            resultado = factorial(nro1);
            printf ("El factorial de %.2f es: %.2f\n\n", nro1, resultado);

            break;

        case 9:
            seguir = 'n';
            break;


        }



    }
    return 0;
}
