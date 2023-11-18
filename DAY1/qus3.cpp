#include <stdio.h>
#include <stdlib.h>

// Function to reverse the given number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    char ch;

    printf("Enter a number: ");
    // Read a character to check if the input is valid
    if (scanf("%d%c", &num, &ch) != 2 || ch != '\n') {
        printf("Illegal input\n");
        return 1;
    }

    int reversed = reverseNumber(num);
    printf("The reverse of the given number is: %d\n", reversed);
    return 0;
}
