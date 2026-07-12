#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="programming",r[100];
    int freq[256]={0},i,j=0;
    for(i=0;s[i]!='\0';i++)
        if(freq[(int)s[i]]==0){r[j++]=s[i];freq[(int)s[i]]=1;}
    r[j]='\0';
    printf("%s",r);
}
