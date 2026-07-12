#include <stdio.h>
struct emp{char name[50];float basic,da,hra,gross;};
int main() {
    struct emp e;
    scanf("%s %f %f %f",e.name,&e.basic,&e.da,&e.hra);
    e.gross=e.basic+e.da+e.hra;
    printf("%s %.2f",e.name,e.gross);
}
