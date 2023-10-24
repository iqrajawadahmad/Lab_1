#include <stdio.h>
// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n > 0) {
        
        printf("%d", n % 2);
        decimalToBinary(n / 2);
    }
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else if (decimal == 0) {
        printf("The binary representation is: 0\n");
    } else {
        printf("The binary representation is: ");
        decimalToBinary(decimal);
        printf("\n");
    }
    return 0;
}
