#include<stdio.h>


int main(){
    char str[]="hello world";
    int i,words;
    for(i=0;str[i]!='0';i++){
        if((i==0 && !space(str[i]) )) || (i>0 && space (str[i-1]) &&! space(str[i])){
            words++;
        }
    }
    printf("%d\n",words);
    return 0;


}