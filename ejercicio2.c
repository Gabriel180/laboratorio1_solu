#include <stdio.h>
// Se solicitan los datos de los amigos de Pepe y se solicita el precio, luego usando la ecuacion para el iva, propina  finalizamos imprimiendo cuanto debe pagar cada uno//
int main () { 
	int cda, pr;
	float pf;
	printf("Ingrese la cantidad de amigos de Pepe: ") ;
	scanf ("%d", &cda);
	printf ("Ingrese el precio: ");
	scanf ("%d", &pr);
	pf = ((((pr*0.19)+pr)*0.1)+pr)/cda;
	printf("cada uno debe de pagar: %f", pf);
	return 0;}
