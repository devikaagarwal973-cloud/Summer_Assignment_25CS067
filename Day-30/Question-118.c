#include <stdio.h>
struct book{int id;char title[50];char author[50];};
int main(){
    struct book b[2];
    int i;
    for(i=0;i<2;i++) scanf("%d %s %s",&b[i].id,b[i].title,b[i].author);
    for(i=0;i<2;i++) printf("%d %s %s\n",b[i].id,b[i].title,b[i].author);
}
