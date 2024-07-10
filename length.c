#include<stdio.h>
int main(){
    char str[]="hello";
    int i,length=0;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    printf("%d\n",length);
    return 0;
}