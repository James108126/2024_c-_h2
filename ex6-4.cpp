#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int main()
{
    int a , b ;
    printf("please input int a =");
    scanf("%d",&a);
    printf("please input int b =");
    scanf("%d",&b);
    printf("a+b = %d/n",add(a,b));
    printf("a-b = %d/n",sub(a,b));
    printf("a*b = %d/n",mul(a,b));
    printf("a/b = %d/n",divi(a,b));
    return 0;
}
   
