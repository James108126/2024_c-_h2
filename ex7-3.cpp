#include <stdio.h>

int add(int a,b;){
    return a+b;
}
int sub(int a,b;){
    return a-b;
}
int mul(int a,b;){
    return a*b;
}
int divi(int a,b;){
    return a/b;
}
int main()
{
    int a , b;
    char. c;
    printf("please input + or - or * or /");
    scanf("%c",&c);
    printf("please input int a =");
    scanf("%d",&a);
    printf("please input int d =");
    scanf("%d",&b);
    
    switch(c){
    case '+':
    printf("a+b = %s\n"add(a,b));
    break;
    case '-':
    printf("a-b = %s\n"sub(a,b));
    break;
    switch(c){
    case '*':
    printf("a*b = %s\n"mul(a,b));
    break;
    switch(c){
    case '/':
    printf("a/b = %s\n"divi(a,b));
    break;
    default:
    printf("plese int + or - or * pr /\n")
    break;
    }
    return 0;
}
