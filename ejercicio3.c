#include <stdio.h>
// Se solicita el precio si fuera mayor a 2500 se realiza un descuento del 25% y si fuera inferior a 2500 entero se realiza un descuento del 8%// 
int main (){
	int t, vt;
	printf ("Precio de su traje: ") ;
	scanf ("%d" , &t);
	if (t < 2500){
		 vt= t-(t*0.08);
	 }
	 if ( t >= 2500) {
		vt= t-(t*0.15) ;
		}
		if (t<=0)
		printf ("No es un valor valido");

	printf ("\n El valor final es: %d", vt);
	return 0; }
