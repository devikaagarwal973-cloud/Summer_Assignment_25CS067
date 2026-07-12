#include <stdio.h>
int main(){
    int a,b,ch;
    scanf("%d %d",&a,&b);
    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d",&ch);
    if(ch==1) printf("%d",a+b);
    else if(ch==2) printf("%d",a-b);
    else if(ch==3) printf("%d",a*b);
    else if(ch==4) printf("%d",a/b);
}
