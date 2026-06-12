#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp;
    long long product = 1;


    printf("Enter any number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

/
    temp = abs(num);

    
    if (temp == 0) {
        product=0
        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;            
        }
    }

    printf("The product of the digits of %d is: %lld\n", num, product);

    return 0;
}
