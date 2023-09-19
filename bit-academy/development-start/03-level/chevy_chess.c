#include <stdio.h>

#include <stdio.h>


void printChessboard() {
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            
            if ((i + j) % 2 == 0) {
                printf("X ");
            } else {
                printf("O ");
            }
        }
        printf("\n");
    }
}

int main() {
    printf("Schaakbord:\n");
    printChessboard();

    return 0;
}







