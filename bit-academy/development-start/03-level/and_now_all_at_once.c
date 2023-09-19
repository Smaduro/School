#include <stdio.h>

int main()

{
    int a[] = {66, 73, 84, 32, 65, 99, 97, 100, 101, 109, 121};
    int n = sizeof(a) / sizeof(a[0]);

printf(">\n");

for (int i = 0; i < n; i++) {
    char karakter = (char)a[i];
    printf("%c ", karakter);
}

printf("\n");

return 0;
}

