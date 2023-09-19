#include <stdio.h>
#include <string.h>

int main()

{
char str[100];
    int i, metspace=0, zonderspace=0;
    printf("voer je naam: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        metspace++;
    }
    for(i=0; i<metspace; i++)
    {
        if(str[i]==32)
            zonderspace++;
    }
    zonderspace = metspace-zonderspace;
    printf("\nje naam (metspace) = %d", metspace);
    printf("\nje naam (zonderspace) = %d", zonderspace);
    getch();

    return 0;
    

}