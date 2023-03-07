#include <stdio.h>

int main() {
    int i, number[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for ( i=0; i<15; i++){
        if (number[i] % 3 == 0 && number[i] % 5 == 0) {
            printf("\nfizzbuzz");
        } else if (number[i] % 3 == 0) {
            printf("\nfizz");
        } else if (number[i] % 5 == 0) {
            printf("\nbuzz");
        } else {
            printf("\n%d", number[i]);
        }
    }
}
