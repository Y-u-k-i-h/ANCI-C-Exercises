#include <stdio.h>

/* print Celsius-Farenheit table
for Celsius = 0, 20, ..., 300; floating-point version */

main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;

    printf("Celcius\tFarenheit\n");/*Labels for the convirsions*/

    while(celsius <= upper) {
        fahr = (((9.0/5.0) * celsius) + 32);
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }
}