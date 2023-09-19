#include <stdio.h>
#include <string.h>



int main() 

{
    char naam [30];
    printf ("wat is je naam?", naam);
    scanf ("%s", naam);
    printf (" deze naam heeft %d karakters",strlen(naam));

    return 0;
}