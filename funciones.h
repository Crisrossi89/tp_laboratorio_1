#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float Suma(float,float);
float resta(float,float);
float division(float,float);
float multiplicacion(float,float);
int factorial(int x);
int factorial2(int x);

float Suma(float x, float y)
{
	float respuesta;
	respuesta=x+y;
	return respuesta;
}

float resta(float x, float y)
{
	float respuesta;
	respuesta=x-y;
	return respuesta;
}

float division(float x, float y)
{
	float respuesta;
	respuesta=x/y;
	if(y==0)
        {
        respuesta=0;
		system("cls");
		printf("No se puede dividir por cero\n");
		printf("presione un caracter para regresar al menu\n");
		getche();
		system("cls");
		}
        else
            {
			return respuesta;
            }
			return respuesta;
}

float multiplicacion(float x, float y)
{
	float respuesta;
	respuesta=x*y;
	return respuesta;
}


int Factorial (float x)
 {
    int valor = (int)x;
    int respuesta=1;
    int a = 1;
    if(x==0)
    {
        return respuesta;
    }
    else
    {
        for(a;a<=valor;a++){
            respuesta=respuesta*a;
        }
    }
    return respuesta;
 }


int factorial2 (int x)
 {
    int respuesta;
    if(x==0)
        {
        respuesta=1;
        }
        else
            {
            respuesta = x *factorial2(x - 1);
            }
            return respuesta;
 }
