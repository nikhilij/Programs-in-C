#include <stdio.h>

int main() {
    printf("x       x+2     x+4     x+6\n");
    printf("--------------------------------\n");

    for (int x = 1; x <= 13; x += 3) {
        printf("%-8d%-8d%-8d%-8d\n", x, x + 2, x + 4, x + 6);
    }

    return 0;
}
