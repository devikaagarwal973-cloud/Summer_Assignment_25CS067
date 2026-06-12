#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    originalNum = num;

/
    while (num != 0) {
        remainder = num % 10;                  // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit
    }

    
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
