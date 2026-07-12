#include <stdio.h>
#include <string.h>
int main(){
    char s[100]="HelloWorld",r[100];
    int ch,i,len=strlen(s);
    printf("1.Length 2.Reverse 3.Uppercase\n");
    scanf("%d",&ch);
    if(ch==1) printf("%d",len);
    else if(ch==2){for(i=0;i<len;i++) r[i]=s[len-i-1];r[len]='\0';printf("%s",r);}
    else if(ch==3){for(i=0;i<len;i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32;printf("%s",s);}
}
