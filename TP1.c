# include <stdio.h>
/* imprime la tabla Celsius-Fahrenheit
para celsius = 0, 20, ..., 300; versión de punto flotante */
main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0; /* límite superior de la tabla de temperaturas */
	upper = 300; /* límite superior */
	step = 20; /* tamaño del incremento */
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;	
	}
}
