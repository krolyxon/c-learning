#include <stdio.h>

int main() {
    int i, n = 30;
    for ( i=0; i<n; i++){
        if (i % 3 == 0 && i % 5 == 0) {
            printf("\nfizzbuzz");
        } else if (i % 3 == 0) {
            printf("\nfizz");
        } else if (i % 5 == 0) {
            printf("\nbuzz");
        } else {
            printf("\n%d", i);
        }
    }
}
