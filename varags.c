#include <stdio.h>
#include <stdarg.h>

double average(int num, ...) {
    va_list valist;
    double sum = 0.0;
    int i;

    // initialize var_list for num number of arguments
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }

//   Clean the memory reserved for valist
    va_end(valist);

    return sum / num;
}

int main() {
    int max = 30, maxCharacter = 15;
    char string[30] = {'\0'};
    char elements[15][5];
    printf("Enter the numbers: ");
    gets(string);
    int start = 0, end;
    for (int i = 0; i < max; i++) {
        if ( string[i] == ' ') {
            printf("\n");
            end = i;
            int iterator = 0;
            for (iterator = 0; iterator < end; iterator++) {

            }
        } else if (string[i]) {
            printf("%c", string[i]);
        }

    }
    return 0;
}
