#include <stdio.h>

int main()
{
   //Sumar dos numeros los cuales seran pedidos

	//Declaracion de variables
	int numero1;
	int numero2;
	int Resultado;

	printf("======SUMA DE DOS DATOS======\n");

	//Lectura de datos
	printf("Ingresa tu primer numero: ");
	scanf_s("%i", & numero1);
	printf("Ingresa tu segundo numero: ");
	scanf_s("%i", & numero2);

	//Operacion
	Resultado = numero1 + numero2;
	printf("El resultado de la suma de ambos datos es: %i",Resultado);
	printf("\n=============================\n");
}