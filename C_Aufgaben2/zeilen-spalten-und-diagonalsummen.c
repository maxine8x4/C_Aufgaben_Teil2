#include <stdio.h> 

int main () {

    int matrix[4][4] = {
        {2, 3, 5, 7},
        {11, 13, 17, 19},
        {23, 29, 31, 37},
        {41, 43, 47, 53}
    };

    int spalte = sizeof(matrix) / sizeof(matrix[0]);
    int reihe = sizeof(matrix[0])/sizeof(matrix[0][0]);
    int summe = 0;

    // zeilensummen
    for (int zeile = 0; zeile <4; zeile++) {
        summe = 0;

        for (int spalte = 0; spalte < 4; spalte++) {
            summe += matrix[zeile][spalte];
        }
    }

    // spaltensummen
    for (int spalte = 0; spalte < 4; spalte++) {
        summe = 0;
        for (int zeile = 0; zeile < 4; zeile++) {
        summe += matrix[zeile][spalte];
        
        printf("spalte %d: %d\n", spalte +1, summe);
    }
}

    return 0;
}