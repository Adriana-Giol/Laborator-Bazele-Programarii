#pragma once

//Pentru a putea folosi functia sqrt trebuie inclusa biblioteca math.h
#include <math.h>

//PROBLEMA 1
//Sa se calculeze mediile aritmetica, geometrica si armonica a doua numere reale strict pozitive.
//Numerele a si b sunt reale pozitive si se calculeza media artimetica ((a+b)/2), media geometrica (sqrt(a*b)) si media armonica.

void calculareMedii() {
	float a, b;
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);

	//Calculare medii
	float medieAritmetica = (a + b) / 2;
	float medieGeometrica = sqrt(a * b);
	float medieArmonica = (2 * a * b) / (a + b);

	//Afisare  rezultatul mediilor
	printf("Media aritmetica este = %f\t", medieAritmetica);
	printf("Media geometrica este = %f\t", medieGeometrica);
	printf("Media armonica este = %f\t", medieArmonica);
}
