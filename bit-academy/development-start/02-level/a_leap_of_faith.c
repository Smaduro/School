#include <stdio.h>
#include <math.h>

int main()

{
    int jaar;

    printf ("van welk jaar wil je weten wat een gregoriaanse schrikkel jaar is?");

    scanf ("%d", &jaar);

if (jaar % 400 == 0)
{  
    printf ("is een schrikkel jaar");
} 
else if (jaar % 100 ==0)
{
    printf ("dat is een geen schrikkel jaar");
}
else if (jaar % 4 ==0)
{
    printf ("dat is wel een schrikkel jaar");
}
else 
{
    printf ("is geen schrikkel jaar");
}
    
return 0;

}
    




    
