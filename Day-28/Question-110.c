#include <stdio.h>
struct account{int accno;char name[50];float balance;};
int main(){
    struct account a;
    int choice;float amt;
    scanf("%d %s %f",&a.accno,a.name,&a.balance);
    printf("1.Deposit 2.Withdraw 3.Check Balance\n");
    scanf("%d",&choice);
    if(choice==1){scanf("%f",&amt);a.balance+=amt;}
    else if(choice==2){scanf("%f",&amt);if(amt<=a.balance)a.balance-=amt;}
    else if(choice==3) printf("%.2f\n",a.balance);
    printf("Final Balance=%.2f",a.balance);
}
