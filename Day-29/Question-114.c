#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5},ch,i,sum=0,max=a[0];
    printf("1.Sum 2.Max 3.Display\n");
    scanf("%d",&ch);
    if(ch==1){for(i=0;i<5;i++) sum+=a[i];printf("%d",sum);}
    else if(ch==2){for(i=1;i<5;i++) if(a[i]>max) max=a[i];printf("%d",max);}
    else if(ch==3){for(i=0;i<5;i++) printf("%d ",a[i]);}
}
