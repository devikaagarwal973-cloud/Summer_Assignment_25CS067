#include <stdio.h>
struct book{int id;char name[50];char author[50];};
int main(){
    struct book b[3];
    int i;
    for(i=0;i<3;i++) scanf("%d %s %s",&b[i].id,b[i].name,b[i].author);
    for(i=0;i<3;i++) printf("%d %s %s\n",b[i].id,b[i].name,b[i].author);
}
