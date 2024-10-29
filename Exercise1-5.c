#include <stdio.h>

/* print Fahrenheit-Celsius table in reverse order*/

main() {
    int fahr;

    printf("Farenheit\tCelcius\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d\t\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}