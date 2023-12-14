#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (float) 9 / 5 * (celsius + 32);
    printf("%f degrees celsius is equivalent to %f fahrenheit", celsius, fahrenheit);
    return 0;
}
