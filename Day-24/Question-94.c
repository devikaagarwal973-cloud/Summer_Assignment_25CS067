#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="aaabbcccc",c;
    int i,count=1;
    c=s[0];
    for(i=1;s[i]!='\0';i++){
        if(s[i]==c) count++;
        else{printf("%c%d",c,count);c=s[i];count=1;}
    }
    printf("%c%d",c,count);
}
