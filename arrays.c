#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// COS'E' UN ARRAY?
// COME VIENE MEMORIZZATO UN ARRAY IN MEMORIA?
// MODI PER DICHIARARE E INIZIALIZZARE UN ARRAY

//int array[5]; // array di 5 nuemri interi

void stampaNumeri(int *x);
void stampaStringa(char * str);

int main() {

    int *array = calloc(7, sizeof(int));
    array[6] = 123;
 

    int numeroDiElementi = 7;
    for (int i = 0; i < numeroDiElementi; ++i) {
        printf("%d)\t%d\n", i, /*array[i]*/ *(i + array));
    }

    stampaNumeri(array + 3);

    stampaNumeri(array);

    char *stringa = "jdshg kls";
    stampaStringa(stringa);
    char *nuovaStringa = strcat()

    // strlen(stringa) --> 10
    // strcpy(nuovo, vecchio) --> contenuto di vecchio viene copiato in nuovo
    // strcat("nuovo", "vecchio") --> "nuovovecchio"
    // strcmp("str", "str") --> 0
    // strcmp("strDiversa", "str") --> qualsiasi valore diverso da zero


}

void stampaNumeri(int *x) {

    for (; *x != 123; x++) {
        printf("%d\n", *x);
        *x = 7;
    }
    
}

void stampaStringa(char * str) {

    for (; *str; str++) {
        printf("%d\n", *str);
    }

}

// MODI PER ACCEDERE E MODIFICARE GLI ELEMENTI DI UN ARRAY
//int array[] = {1, 2, 3, 4, 5, 6}; // array di 5 nuemri interi
// *(array + 1) --> array[1] = 1[array] <-- *(1 + array)

// array 2D

// int **array2D = (*int)(((*int)malloc(sizeof(int) * 100)) * 100);
// int array2D[100][100];

// typedef struct persona {

//     int eta;
//     char * nome;
//     char * cognome; 
//     Persona * figli;

// } Persona;

// Persona persona = {55, "fhksjdaf", "hdgf a"}
