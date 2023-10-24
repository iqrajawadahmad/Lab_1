#include <stdio.h>
int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
void printFibonacciSeries(int n, int i) {
    if (i <= n) {
        printf("%d ", fib(i));
        printFibonacciSeries(n, i + 1);
    }
}
int main() {
    int n;
    printf("Enter the value of n to calculate the Fibonacci series: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("The Fibonacci series up to the %dth number: ", n);
    printFibonacciSeries(n, 1);
    printf("\n");
    return 0;
}
