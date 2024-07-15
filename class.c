// structure





#include<stdio.h>

struct hello{
    int a;
    int b;
    char s;
};

int main(){
struct hello obj;

obj.a=6;
obj.b=8;
obj.s='e';
printf("%d",obj.a);
printf("\n%d",obj.b);
printf("\n%c",obj.s);
return 0;

}