#include <stdio.h>
#include <string.h>
int main() {
    char s1[100]="hello",s2[100]="world";
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        for(j=0;s2[j]!='\0';j++)
            if(s1[i]==s2[j]){printf("%c ",s1[i]);break;}
}
