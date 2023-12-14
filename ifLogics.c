#include <stdio.h>

int main() {
    int p, q, r, s;
    printf("Enter p: ");
    scanf("%d", &p);
     printf("Enter q: ");
    scanf("%d", &q);
    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter s: ");
    scanf("%d", &s);
    if ((r > 0 && s > 0) && (p % 2 == 0)) {
        if (q > r && s > p) {
            if ((r + s) > (p + q)) {
                printf("Correct values ");
            }
        }
    }
    return 0;
}
