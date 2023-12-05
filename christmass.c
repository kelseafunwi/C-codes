#include <stdio.h>

// function that returns the number of days in that month
int dateMax(int monthNumber) {
    if (monthNumber == 2) {
        return 28;
    } else if (monthNumber == 9 || monthNumber == 4 || monthNumber == 5 || monthNumber == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    // this represents the standard variables for christmass
    int chrismasDay= 25, chrismasMonth = 12, daysLeft = 0;
    int day, month, monthDays = 0;

    printf("Enter date in format dd/mm: ");
    scanf("%d/%d", &day, &month);
    int remainder = dateMax(month) - day;

    // this will add all the days in all the months between your choosen month and chrismas till first december
    for (int i = month + 1; i < chrismasMonth; i++) {
        monthDays += dateMax(i);
    }

    // 25th is added to make 25th december since the above loop ends on first december
    daysLeft = monthDays + remainder + 25;

    printf("Chrismas is in %d days ", daysLeft);

    return 0;
}
