#include<stdio.h>
int main(){
    char ch ='u';
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ){
        printf("%c vowels\n",ch);
    }
    else{
        printf("% c consonants \n",ch);
    }
    return 0;
}