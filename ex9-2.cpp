#include <stdio.h>

int main()
{
    int myAge = 43;
    int *p;
    
    printf("myAge value = %d\n" , myAge);
    
    printf("myAge's addres in memory = %\p" , &myAge); // Outputs 0x7ffe5367e044

    p = &myAge;
    printf("pointer p's value in memory = %d\n" , *p);




    return 0;
    
}
