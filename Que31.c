//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void printBinary(int num) {
    int binary[32];
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    // Store binary digits in array
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printBinary(num);
    printf("\n");
    return 0;
}
