#include <stdio.h>

int main () {
    for (int i = 20; i > 1; i--) {
        if (i % 2 !=0)
        continue;
        printf("%d\n", i);
    }
}