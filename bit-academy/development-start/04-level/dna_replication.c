#include <stdio.h>
#include <string.h>

int hammingDistance(const char *strand1, const char *strand2, int *mismatch_positions) {
    int len1 = strlen(strand1);
    int len2 = strlen(strand2);

    if (len1 != len2) {
        printf("Fout: De lengtes van de DNA-strengen komen niet overeen.\n");
        return -1;
    }

    int distance = 0;

    for (int i = 0; i < len1; i++) {
        if (strand1[i] != strand2[i]) {
            distance++;
            mismatch_positions[i] = 1;
        } else {
            mismatch_positions[i] = 0;
        }
    }

    return distance;
}

int main() {
    char dna1[100], dna2[100];
    int mismatch_positions[100];

    printf("Voer de eerste DNA-streng in: ");
    scanf("%s", dna1);

    printf("Voer de tweede DNA-streng in: ");
    scanf("%s", dna2);

    int result = hammingDistance(dna1, dna2, mismatch_positions);

    if (result != -1) {
        printf("De Hamming-afstand tussen de DNA-strengen is: %d\n", result);
        printf("Posities waar de strengen niet overeenkomen:\n");

        for (int i = 0; i < strlen(dna1); i++) {
            if (mismatch_positions[i] == 1) {
                printf("Positie %d: %c != %c\n", i + 1, dna1[i], dna2[i]);
            }
        }
    }

    return 0;
}