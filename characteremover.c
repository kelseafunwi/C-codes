#include <stdio.h>
int main(void) {
    char string[100] = {' '}, num;
    printf("Enter the string");
    scanf("%s", &string);
    for (int i = 0; i < 100; i++) {
        if (string[i] && string[i] != ' ') {
            num = (int) string[i];
            if (!((num >= 97 && num <= 122) || (num >= 65 && num <= 90))) {
                string[i] = ' ';
            } else {
                printf("%c", string[i]);
            }
        }
    }
}
