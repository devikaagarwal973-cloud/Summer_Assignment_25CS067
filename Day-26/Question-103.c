#include <stdio.h>
int main() {
    int balance=10000,choice,amount;
    printf("1.Deposit 2.Withdraw 3.Check Balance\n");
    scanf("%d",&choice);
    if(choice==1){scanf("%d",&amount);balance+=amount;}
    else if(choice==2){scanf("%d",&amount);if(amount<=balance)balance-=amount;else printf("Insufficient\n");}
    else if(choice==3) printf("Balance=%d\n",balance);
    printf("Final Balance=%d",balance);
}
