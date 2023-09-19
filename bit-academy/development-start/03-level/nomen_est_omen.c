#include <stdio.h>

int main()
{
     char naam[30];
    
    printf("Hoi!, Wat is je naam? ");
    fgets(naam, sizeof(naam), stdin); 
    printf("Hoi!,:");
    puts(naam);
    
    return 0;
}