#include <stdio.h>
struct item{int id;char name[50];int qty;float price;};
int main(){
    struct item i[3];
    int j;
    for(j=0;j<3;j++) scanf("%d %s %d %f",&i[j].id,i[j].name,&i[j].qty,&i[j].price);
    for(j=0;j<3;j++) printf("%d %s %d %.2f\n",i[j].id,i[j].name,i[j].qty,i[j].price);
}
