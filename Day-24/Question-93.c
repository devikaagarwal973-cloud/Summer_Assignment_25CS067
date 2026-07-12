#include <stdio.h>
#include <string.h>
int main() {
    char s1[100]="abcd",s2[100]="cdab",temp[200];
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2)) printf("Rotation"); else printf("Not Rotation");
}
