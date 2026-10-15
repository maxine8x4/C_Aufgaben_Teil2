#include <stdio.h> 

int main () {

    int matrix[4][4] = {
        {2, 3, 5, 7},
        {11, 13, 17, 19},
        {23, 29, 31, 37},
        {41, 43, 47, 53}
    };

    int summe = 0;


    // zeilensummen
    for (int zeile = 0; zeile <4; zeile++) {
        summe = 0;

        for (int spalte = 0; spalte < 4; spalte++) {
            summe += matrix[zeile][spalte];
        }
        printf("zeile %d: %d\n", zeile +1, summe);
    }


// spaltensummen
    for (int spalte = 0; spalte < 4; spalte++) {
        summe = 0;
        for (int zeile = 0; zeile < 4; zeile++) {
        summe += matrix[zeile][spalte];
        
    }
    printf("spalte %d: %d\n", spalte +1, summe);
    }


    // hauptdiagonale berechnen
    summe = 0;
    
    for (int i = 0; i < 4; i++) {
    summe += matrix[i][i];
    }
    printf("Hauptdiagonale: %d\n", summe);


// nebendiagonale berechnen
    summe = 0; 

    for (int i = 0; i < 4; i++) {
       summe += matrix[i][3 - i];
    }
    printf("Nebendiagonal: %d\n", summe);

    return 0;
}