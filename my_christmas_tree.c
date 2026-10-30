#include <stdlib.h>
#include <stdio.h>

void my_christmas_tree(int size) {
    int width = 1;
    int ecart = 0;
    int taille = 1;
    int count = 0;

    for (int t = 0; t < size; t++) {
        if (t % 2 == 0 && t != 0) {
            count++;
        }

        ecart+=3+count;
    }


    int stock = ecart;

    for (int index = 0; index < size; index++) {
        for (int p = 0; p < 4+index; p++) {
            for (int c = 0; c < ecart; c++) {
                printf(" ");
            }
            for (int i = 0; i < width; i++) {
                printf("*");
            }
            printf("\n");
            width += 2;
            ecart -= 1;
        }
        if (index % 2 == 0 && index != 0) {
            taille++;
        }
        width -= 2+2*taille;
        ecart += 1+taille;
    }
    for (int e = 0; e < size; e++) {
        for (int d = 0; d < stock-(size/2); d++) {
                printf(" ");
        }
        for (int u = 0; u < size; u++) {
            printf("|");
        }
        printf("\n");
    }
}

int main() {
    my_christmas_tree(5);

    return 0;
}