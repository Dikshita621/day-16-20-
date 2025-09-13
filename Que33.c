//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
            power *= remainder;
        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
