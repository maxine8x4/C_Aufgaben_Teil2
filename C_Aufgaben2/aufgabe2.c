#include <stdio.h>

int main () {

    int a[5] = {2, 4, 5, 6, 9};
    int b[5];
    for (int i = 0; i < 5; i++) {
        b[i] = a[4 - i];
        printf("%d\n", b[i]);
    }

}