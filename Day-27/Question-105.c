#include <stdio.h>
struct student{int id;char name[50];float marks;};
int main() {
    struct student s[3];
    int i;
    for(i=0;i<3;i++) scanf("%d %s %f",&s[i].id,s[i].name,&s[i].marks);
    for(i=0;i<3;i++) printf("%d %s %.2f\n",s[i].id,s[i].name,s[i].marks);
}
