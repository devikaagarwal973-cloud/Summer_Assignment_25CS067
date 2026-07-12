#include <stdio.h>
#include <string.h>
struct student{char name[50];int roll;float marks;};
void display(struct student s[],int n){
    int i;for(i=0;i<n;i++) printf("%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);
}
int main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++) scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].marks);
    display(s,3);
}
