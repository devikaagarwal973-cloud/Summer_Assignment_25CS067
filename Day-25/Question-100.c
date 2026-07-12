#include <stdio.h>
#include <string.h>
int main() {
    char words[5][20]={"apple","banana","kiwi","grape","orange"},temp[20];
    int i,j;
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
    for(i=0;i<5;i++) printf("%s\n",words[i]);
}
