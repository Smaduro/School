#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Voer een berekening in (+, -, *, /): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("Resultaat: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultaat: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultaat: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultaat: %.2lf\n", num1 / num2);
            } else {
                printf("Fout: Deling door nul is niet toegestaan.\n");
            }
            break;
        default:
            printf("Ongeldige operator ingevoerd.\n");
    }

    return 0;
}