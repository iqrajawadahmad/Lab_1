#include <stdio.h>

int main() {
    int no1;
    int no2;

    printf("Enter number 1: \n");
    scanf("%d", &no1);

    printf("Enter number 2: \n");
    scanf("%d", &no2);

    if (no1 > 5 && no2 > 5) {
        printf("Addition of both numbers is %d\n", no1 + no2);
    } else if (no1 > 5 || no2 > 5) {
        printf("Multiplication of both numbers is %d\n", no1 * no2);
    } else {
        printf("Hello World\n");
    }

    return 0;
}
