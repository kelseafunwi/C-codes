#include <stdio.h>

int main()
{
    int number, min, max, avg, i = 0;
    // we just declared an array of size 100 since we don't know how many numbers the user will need.
    int array[100];
    // we first start by asking the user for a number before checking conditions
    printf("Input a positive number: ");
    // number is received using scanf
    scanf("%d", &array[i]);

    // this loop will keep getting numbers from the user until we get a number <= 0
    while (array[i] > 0){
        i++;
        printf("Input next positive integer: ");
        scanf("%d", &array[i]);
    }

    if (i == 0) {
        printf("You did not enter any positive number\n");
        return 0;
    }

    // this should print the number of positve number the user entered
    printf("the number of positive number is %d\n", i - 1);

    // calculating the minimum number
    //start by initializing the max and min to be the first elements in the array
    min = array[0];
    max = array[0];

    // this block of code will determine the minimum and maximum number in the array.
    // we skipped the first element since it was set above
    for (int j = 1; j < i - 1 ; j++) {
        if (array[j] >  max) {
            max  = array[j];
        }

        if (array[j] < min) {
            min = array[j];
        }
    }

    printf("the minimum and maximum number are %d and %d respectively\n",min, max);

    return 0;
}
