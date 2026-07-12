#include <stdio.h>
struct student{char name[50];int m1,m2,m3;float avg;};
int main() {
    struct student s;
    scanf("%s %d %d %d",s.name,&s.m1,&s.m2,&s.m3);
    s.avg=(s.m1+s.m2+s.m3)/3.0;
    printf("%s %.2f",s.name,s.avg);
}
    