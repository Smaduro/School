#include <stdio.h>

#include <string.h>

#include <stdlib.h>

char* omgekeerdeString(const char* input) {
    int lengte = strlen(input);
    char* omgekeerd = malloc((lengte + 1) * sizeof(char)); 
    if (!omgekeerd) {
        perror("Geheugenallocatie mislukt");
        exit(1);
    }

for (int i = 0; i < lengte; i++) {
    omgekeerd[i] = input[lengte - i - 1];
}

omgekeerd[lengte] = '\0'; 

return omgekeerd;
}

int main() {
    const char* origineleString = "hallo wereld!";
    char* omgekeerdString = omgekeerdeString(origineleString);

printf("Originele string: %s\n", origineleString);
printf("Omgekeerde string: %s\n", omgekeerdString);

free(omgekeerdString); 

return 0;
}