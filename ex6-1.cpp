#include <stdio.h>

int main()
{
    int a,b;
    printf("please input a =" );
    scanf("%d",&a);
    printf("please input b =" );
    scanf("%d",&b);
    if(a > b){
        printf("a < b");
    }else if (a<b){
        printf("d < a");    
    }else{
        printf("a==b");
    }
    return 0;

}




#include <stdio.h>

int main()
{
    int a, b;
    printf("請輸入 a: ");
    scanf("%d", &a);
    printf("請輸入 b: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("a 大於 b");
    } else if (a < b) {
        printf("a 小於 b");
    } else {
        printf("a 等於 b");
    }

    return 0;
}
