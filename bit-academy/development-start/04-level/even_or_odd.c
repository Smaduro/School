#include <stdio.h>

int main() {
    int num;

    // Vraag de gebruiker om een getal in te voeren
    printf("Voer een getal in: ");
    scanf("%d", &num);

    printf("Even getallen van 0 tot %d:\n", num);
    for (int i = 0; i <= num; i += 2) {
        printf("%d ", i);
    }

    printf("\nOneven getallen van 0 tot %d:\n", num);
    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}





