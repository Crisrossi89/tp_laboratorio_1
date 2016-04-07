#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

float suma(float,float);
float multi(float,float);
float resta(float,float);
float division(float,float);
int Factorial(float);
int numb;
float respuesta;

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1, numero2;
    float suma;


    system("cls")  ;
    printf("Calculadora: \n\n");

        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        opcion = validarRango(1,9);


            while(opcion!=9){
                switch(opcion)
                    {
                    case 1:
                        printf("\nIngrese un numero:");
                        scanf("%f", &numero1);
                        break;
                    case 2:
                        printf("\nIngrese otro numero:");
                        scanf("%f", &numero2);
                        break;
                    case 3:
                        respuesta=Suma(numero1,numero2);
                        printf("La suma es: %f\n",respuesta);
                        break;
                    case 4:
                        respuesta=resta(numero1,numero2);
                        printf("La resta es: %f\n",respuesta);
                        break;
                    case 5:
                        respuesta=division(numero1,numero2);
                        printf("La division es: %f\n",respuesta);
                        break;
                    case 6:
                        respuesta=multiplicacion(numero1,numero2);
                        printf("La multiplicacion es: %f\n",respuesta);
                        break;
                    case 7:
                        numb=(int) numero1;
                        respuesta = factorial2(numb);
                        printf("El factorial de %i es:%d \n",(int)numero1,(long)respuesta);
                        break;
                    case 8:
                        printf("\nLa suma es: %f",Suma(numero1,numero2));
                        printf("\nLa resta es: %f",resta(numero1,numero2));
                        printf("\nLa division es: %f",division(numero1,numero2));
                        printf("\nLa multiplicacion es: %f",multiplicacion(numero1,numero2));
                        printf("\nEl factorial de %i es: %d",(int)numero1,(long)Factorial(numero1));
                        break;
                    }
                printf("\nIngrese su opcion:");
                opcion = validarRango(1,9);
            }
        printf("\n Saliendo");
        return 0;
}



 int validarRango(int li, int ls)
{
    int opcion=-1;
    do
    {
        scanf("%i",&opcion);
        if(opcion<li || opcion>ls)
            printf("Valor no valido, por favor ingrese nuevamente.\n");

    }while(opcion<li || opcion>ls);

    return opcion;
}
