#include <stdio.h>

int main () {

    int a[] = {9, 23, -1, 0, 3, 16, 2, 1, -2, 4, 8};
    
    int kleinsteZahl = a[0];
    int größteZahl = a[0];
    float durchschnitt = a[0];
    
    for (int i = 0; i < 11; i++) {
        if (a[i] < kleinsteZahl) {
            kleinsteZahl = a[i];
        }
        if (a[i] > größteZahl) {
            größteZahl = a[i];
        }
    }

    int summe = 0; 
    for (int i = 0; i < 11; i++) {
        summe += a[i];
    }
durchschnitt = (float)summe / 11;


    return 0;
}