/*
Q37: Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int lcm = (num1 * num2) / gcd(num1, num2);
    printf("LCM: %d\n", lcm);
    return 0;
}
