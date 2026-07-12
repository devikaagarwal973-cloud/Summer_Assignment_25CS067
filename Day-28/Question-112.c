#include <stdio.h>
struct contact{char name[50];char phone[15];};
int main(){
    struct contact c[3];
    int i;
    for(i=0;i<3;i++) scanf("%s %s",c[i].name,c[i].phone);
    for(i=0;i<3;i++) printf("%s %s\n",c[i].name,c[i].phone);
}
