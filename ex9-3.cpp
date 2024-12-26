#include <stdio.h>

int main()
{
    char greetinhs[ ] = "Hello Word!";
    char greetings[ ] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    
    printf("%s\n" , greetings);
    
    greetinhs[0] = 'J';
    
    printf("%s\n" , greetings);
    
    greetinhs[4] = '4';  
    
    printf("%s\n" , greetings);
    
    return 0;
}
