#include<stdio.h>
int main(){
    
    char name[100];

    printf("What's your name?");
    scanf("%s", &name);
    printf("hello, %s",name);
    return 0;
}