#include <stdio.h>
struct emp{int id;char name[50];float salary;};
int main(){
    struct emp e[3];
    int i;
    for(i=0;i<3;i++) scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    for(i=0;i<3;i++) printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
}
