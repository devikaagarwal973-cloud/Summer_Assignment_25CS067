#include <stdio.h>
struct ticket{int id;char name[50];int seats;};
int main(){
    struct ticket t;
    scanf("%d %s %d",&t.id,t.name,&t.seats);
    printf("Ticket ID:%d Name:%s Seats:%d",t.id,t.name,t.seats);
}
