#include <stdio.h>

int main() {
    int days, months, years;
    printf("Enter days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days - (years * 365);
    months = days / 7;
    days = days - (months * 7);
    printf("%d Years, %d Months, %d days", years, months, days);
    return 0;
}
