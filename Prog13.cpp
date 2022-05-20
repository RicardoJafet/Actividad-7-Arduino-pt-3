/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/02/2022
	Onceavo programa en C, Programa en arduino: En deicha tienda existen promociones:
	- si se compra un minimo de 10 arduinos, se aplica un descuento de 25% 
	- si se compra un minimo de 5 arduinos, se aplica un descuento de 15%
	- si no, se aplica un descuento de 5%
	cada arduino tiene un costo de $350.
	El programa pedira la cantidad de arduinos a comprar y calculara el total a pagar.
	*/

#include<stdio.h>



int main() {
	// Declaracion 
	int arduinos;
	float total, descuento=0;
	// Entrada de datos
	printf("Porfavor introduzca la cantidad de arduinos deseada: ");
	scanf("%d", &arduinos);
	// Proceso 
	total=arduinos*350.0;
	if (arduinos>=10) {
	descuento=total*0.25;
	}
	else if (arduinos>=5) {
		descuento=total*0.15;
	}
	else {
		descuento=total*0.05;
	}
	printf("Subtotal:   $%10.2f\n", total);
	printf("Descuento: -$%10.2f\n", descuento);
	printf("           -------------\n");
	printf("Total:      $%10.2f", total-descuento);
	return 0;
}
