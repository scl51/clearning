#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limt */
#define STEP 20 /* step size */

main() /* Fahrenheit-Celcius table */
{
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}