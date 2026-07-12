#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num,guess;
    srand(time(0));
    num=rand()%100+1;
    do{
        printf("Enter guess: ");
        scanf("%d",&guess);
        if(guess<num) printf("Too low\n");
        else if(guess>num) printf("Too high\n");
    }while(guess!=num);
    printf("Correct!");
}
