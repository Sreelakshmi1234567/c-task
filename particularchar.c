#include<stdio.h>
int main (){
    char str[]="hello";
    char ch='o';
    int i,count;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("%c occurs %d times in the string",ch,count);
    return 0;
    
}