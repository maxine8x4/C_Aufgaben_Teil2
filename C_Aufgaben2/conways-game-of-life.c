#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 79
#define HEIGHT 24


const char dead_cell = ' ';
const char living_cell = '@';

const char clear_screen_str[] = "\033[2J\033[H";
const unsigned int delay_in_us = 200000;

char grid_cur[HEIGHT][WIDTH];
char grid_next[HEIGHT][WIDTH];

int main () 
{
    // Zufallszahlengenerator initialisieren
    srand(time(NULL));

    //Initialisiere grid_cur mit z.B. 30% lebende Zellen.
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
    
    
    //Für jede Zelle:
        if (rand() % 100 < 30) {
        grid_cur[y][x] = living_cell; // lebend
        } else {
        grid_cur[y][x] = dead_cell; // tot
        }
    }
}
    // Dein Code
    
    //Main-Loop. Nach jeder Iteration wird 200ms pausiert.
    for (;; usleep(delay_in_us)) {
        //Bildschirm löschen und Cursor in der oberen linken Ecke
        //positionieren
        printf(clear_screen_str);
        
        //Dein Code
        //1. grid_cur ausgeben
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                printf("%c", grid_cur[y][x]);
            
                
            }
            printf("\n");
    }    

    //2.Neuen Zustand in grid_next berechnen
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int nachbarn = 0;
            if (y > 0 && x > 0 && grid_cur[y - 1][x - 1] == living_cell) {
                nachbarn++;
            }
            if (y > 0 && grid_cur[y - 1][x] == living_cell) {
                nachbarn++;
            }
            if (y > 0 && x < WIDTH - 1 && grid_cur[y - 1][x + 1] == living_cell) {
                nachbarn++;
            }
            if (x > 0 && grid_cur[y][x - 1] == living_cell) {
                nachbarn++;
            }
            if (x < WIDTH - 1 && grid_cur[y][x + 1] == living_cell) {
                nachbarn++;
            }
            if (y < HEIGHT - 1 &&  x > 0 && grid_cur[y + 1][x - 1] == living_cell) {
                nachbarn++;
            }
            if (y < HEIGHT - 1 && grid_cur[y + 1][x] == living_cell) {
                nachbarn++;
            }
            if (y < HEIGHT - 1 && x < WIDTH - 1 && grid_cur[y + 1][x + 1] == living_cell) {
                nachbarn++;
            }

            
        if (grid_cur[y][x] == living_cell && nachbarn < 2) {
                grid_next[y][x] = dead_cell;
        } else if 
            (grid_cur[y][x] == living_cell && (nachbarn == 2 || nachbarn == 3)) {
                grid_next[y][x] = living_cell;
        } else if 
            (grid_cur[y][x] == living_cell && nachbarn > 3) {
                grid_next[y][x] = dead_cell;
        } else if 
            (grid_cur[y][x] == dead_cell && nachbarn == 3) {
                grid_next[y][x] = living_cell;
            }
            else {
                grid_next[y][x] = dead_cell;
            }
        }
        }

        //3.grid_next nach grid_cur kopieren
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                grid_cur[y][x] = grid_next[y][x];
            }
        }

    }
    return (0);
}