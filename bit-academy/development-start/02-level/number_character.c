#include <stdio.h>
#include <math.h>
int main ()
{

int testInteger;
    
    printf("voer getal in? =");
    
    scanf("%d", &testInteger );
    
    printf("%c", (char) testInteger); 
    
    printf("ASCII waarde van %d is %c", testInteger, testInteger);
    
    return 0;
}
