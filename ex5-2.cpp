#include <iostream>

int main()
{
    int r;
    printf("please input 圓半徑: ");
    scanf("%d" ,&r);
        
    if(r>=0){
        printf("圓的面積 = %f",3.14*r*r);
        printf("圓的周長 = %f",2*3.14*r);
    }else{
        printf("r < 0 is wrong ");
      
    }    
      
    return 0;  
}
