#include <stdio.h>

int main () {
    
    int a[] = {1, 3, 2, 4, 0, 9, 1, 1, 4};

    for (int zahl = 0; zahl < 10; zahl++) {    
    int anzahl = 0;
    for (int i = 0; i < 9; i++) {
    if (a[i] == zahl) {
            anzahl++;
        }
    }
    printf("%d kommt %d mal vor\n", zahl, anzahl);
    }
return 0;
}