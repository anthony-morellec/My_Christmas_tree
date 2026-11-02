#include <stdlib.h>
#include <stdio.h>

void my_christmas_tree(int size) {
    int width = 1;
    int margin = 0;
    int reduce = 1;
    int count = 0;

    for (int margin_count = 0; margin_count < size; margin_count++) {
        if (margin_count % 2 == 0 && margin_count != 0) {
            count++;
        }

        margin += 3 + count;
    }


    int margin_stock = margin;

    for (int leaves = 0; leaves < size; leaves++) {
        for (int line = 0; line < 4 + leaves; line++) {
            for (int leaves_space = 0; leaves_space < margin; leaves_space++) {
                printf(" ");
            }

            for (int leaves_print = 0; leaves_print < width; leaves_print++) {
                printf("*");
            }

            printf("\n");
            width += 2;
            margin -= 1;
        }

        if (leaves % 2 == 0 && leaves != 0) {
            reduce++;
        }
        
        width -= 2 + 2 * reduce;
        margin += 1 + reduce;
    }
    for (int trunk = 0; trunk < size; trunk++) {
        for (int trunk_space = 0; trunk_space < margin_stock - (size/2); trunk_space++) {
                printf(" ");
        }

        for (int trunk_print = 0; trunk_print < size; trunk_print++) {
            printf("|");
        }
        
        printf("\n");
    }
}

int main(int ac, char** av) {
    if (ac > 1) {
        int number = 0;

        for (int index = 0; av[1][index] != 0; index++) {
            if (av[1][index] >= '0' && av[1][index] <= '9') {
                number = number * 10 + (av[1][index] - '0');
            }
        }
        
        my_christmas_tree(number);
    }

    return 0;
}