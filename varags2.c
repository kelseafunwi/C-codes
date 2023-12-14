#include <stdio.h>
#include <stdarg.h>

// Function to calculate average
double calculate_average(int count, ...) {
    va_list args;
    double sum = 0.0;

    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum / count;
}

int main() {
    int count = 0;
    int sum = 0;
    int number;

    printf("Enter numbers (enter a number <= 0 to stop):\n");

    while (1) {
        scanf("%d", &number);
        if (number <= 0) {
            break;
        }
        sum += number;
        count++;
    }

    if (count > 0) {
        double average = calculate_average(count, sum);
        printf("Average of the entered numbers: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
